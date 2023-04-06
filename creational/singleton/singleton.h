#ifndef _SINGLETON_
#define _SINGLETON_

#include <memory>
#include <mutex>

std::mutex singleton_mutex;

class Singleton
{
public:
    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;
    ~Singleton() {}

    // Set value has to be thread-safe.
    void set_value(int value)
    {
        std::lock_guard<std::mutex> lock(singleton_mutex);
        m_value = value;
    }
    // We don't want get value to be thread-safe in our case.
    int get_value() const { return m_value; }
    static Singleton* get_instance()
    {
        // Use lock to guarantee the singleton object instantiation is
        // thread-safe. But lock will become a burden later on after the
        // singleton object instantiation.
        std::lock_guard<std::mutex> lock(singleton_mutex);
        if (!instance)
        {
            // std::make_unique will not work
            instance = std::unique_ptr<Singleton>(new Singleton());
        }
        return instance.get();
    }

private:
    inline static std::unique_ptr<Singleton> instance{nullptr};
    explicit Singleton() : m_value{0} {}
    int m_value;
};

#endif //_SINGLETON_