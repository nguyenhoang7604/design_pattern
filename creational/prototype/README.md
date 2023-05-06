# What is Prototype Pattern?
**Prototype** is a creational design pattern that lets you copy existing objects without making your code dependent on their classes.


# When to use the the Prototype Pattern?
- Use the Prototype pattern when your code shouldn’t depend on the concrete classes of objects that you need to copy
    _This happens a lot when your code works with objects passed to you from 3rd-party code via some interface. The concrete classes of these objects are unknown, and you couldn’t depend on them even if you wanted to._

    _The Prototype pattern provides the client code with a general interface for working with all objects that support cloning.This interface makes the client code independent from the concrete classes of objects that it clones._

- Use the pattern when you want to reduce the number of subclasses that only differ in the way they initialize their respective objects. Somebody could have created these subclasses to be able to create objects with a specific configuration.
    _The Prototype pattern lets you use a set of pre-built objects, configured in various ways, as prototypes._

    _Instead of instantiating a subclass that matches some configuration, the client can simply look for an appropriate prototype and clone it_

# Pros:
- You can clone objects without coupling to their concrete classes.
- You can get rid of repeated initialization code in favor of cloning pre-built prototypes.
- You can produce complex objects more conveniently.
- You get an alternative to inheritance when dealing with configuration presets for complex objects.

# Cons:
- Cloning complex objects that have circular references might be very tricky

# UML Design: https://drive.google.com/file/d/1Cao62JN6PS_ggh57GRb9KWnHQxtpFlZa/view?usp=sharing


# Relation with Other Patterns:
- **Prototype** can help when you need to save copies of **Commands** into history.
- Designs that make heavy use of **Composite** and **Decorator** can often benefit from using **Prototype**. Applying the pattern lets you clone complex structures instead of re-constructing them from scratch.
- **Prototype** isn’t based on inheritance, so it doesn’t have its drawbacks. On the other hand, **Prototype** requires a complicated initialization of the cloned object. **Factory Method** is based on inheritance but doesn’t require an initialization step.
- Sometimes **Prototype** can be a simpler alternative to **Memento**. This works if the object, the state of which you want to store in the history, is fairly straightforward and doesn’t have links to external resources, or the links are easy to re-establish.