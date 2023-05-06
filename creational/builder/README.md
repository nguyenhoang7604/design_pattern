# What is Builder Pattern?
**Builder** is a creational design pattern that lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

# When to use the the Builder Pattern?
- When you want to build an object made up from other objects.
- When you wnat the creation of these parts to be independent of the main object.
- Hide the creation of the parts from the client so both aren't dependent.
- The builder knows the specifics and nobody else does.

# Pros:
- You can construct objects step-by-step, defer construction steps or run steps recursively.
- You can reuse the same construction code when building various representations of products.
- Single Responsibility Principle. You can isolate complex construction code from the business logic of the product.

# Cons:
- The overall complexity of the code increases since the pattern requires creating multiple new classes.

# UML Design: https://drive.google.com/file/d/1c6nVYBdapHWy69X4wUusCrofqxB8lQPO/view?usp=sharing


# Relation with Other Patterns:
- Many designs start by using **Factory Method** (less complicated and more customizable via subclasses) and evolve toward **Abstract Factory**, **Prototype**, or **Builder** (more flexible, but more complicated).
- **Builder** focuses on constructing complex objects step by step. Abstract Factory specializes in creating families of related objects. **Abstract Factory** returns the product immediately, whereas **Builder** lets you run some additional construction steps before fetching the product.
- You can use **Builder** when creating complex Composite trees because you can program its construction steps to work
recursively.
- You can combine **Builder** with **Bridge**: the director class plays the role of the abstraction, while different builders act as implementations.
- **Abstract Factories**, **Builders** and **Prototypes** can all be implemented as **Singleton**