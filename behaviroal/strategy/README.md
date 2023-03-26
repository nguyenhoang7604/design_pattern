# What is the Strategy Pattern?
- **Strateg**y is a behavioral design pattern that lets you define a family of algorithms, put each of them into a separate class, and make their objects interchangeable.

# When to use the the Strategy Pattern?
- When you want to define class that will have one behavior that is similar to other behaviors in a list
- When you need to use one of several behaviors dynamically
- Example:
    *- I want the class object to be able to choose from*
    *- Not Flying | Fly With Wings | Fly Supper Fast*

# Pros:
    - Often reduces long lists conditionals
    - Avoid duplicate code
    - Keeps class changes from forcing other class changes
    - Can hide compilcated / secret code from the user

# Cons:
    - Increased number of Objects / Classes.

# UML Design: https://drive.google.com/file/d/1_-fiy9FMN9ndUvQtEzd_iAonYr-L-ghi/view?usp=sharing

# Relation with Other Patterns
- **Bridge, State, Strategy** (and to some degree **Adapter**) have very similar structures. Indeed, all of these patterns are based on composition, which is delegating work to other objects. However, they all solve different problems. A pattern isn’t just a recipe for structuring your code in a specific way. It can also communicate to other developers the problem the pattern solves.

- **Command** and **Strategy** may look similar because you can use both to parameterize an object with some action. However, they have very different intents.
    - You can use *Command* to convert any operation into an object. The operation’s parameters become fields of that object. The conversion lets you defer execution of the operation, queue it, store the history of commands, send commands to remote services, etc.
    - On the other hand, *Strategy* usually describes different ways of doing the same thing, letting you swap these algorithms within a single context class.

- **Decorator** lets you change the skin of an object, while **Strategy** lets you change the guts.

- **Template Method** is based on inheritance: it lets you alter parts of an algorithm by extending those parts in subclasses. **Strategy** is based on composition: you can alter parts of the object’s behavior by supplying it with different strategies that correspond to that behavior. Template Method works at the class level, so it’s static. Strategy works on the object level, letting you switch behaviors at runtime.

- **State** can be considered as an extension of Strategy. Both patterns are based on composition: they change the behavior of the context by delegating some work to helper objects. **Strategy** makes these objects completely independent and unaware of each other. However, State doesn’t restrict dependencies between concrete states, letting them alter the state of the context at will.