# What is Abstract Factory Pattern?
**Abstract Factory** is a creational design pattern that lets you produce families of related objects without specifying their concrete classes

# Pros:
- You can be sure that the products you’re getting from a factory are compatible with each other.
- You avoid tight coupling between concrete products and client code.
- _Single Responsibility Principle_. You can extract the product creation code into one place, making the code easier to sup
- Open/Closed Principle. You can introduce new variants of products without breaking existing client code

# Cons:
- The code may become more complicated than it should be, since a lot of new interfaces and classes are introduced along with the pattern

# UML Design: https://drive.google.com/file/d/1zJaH9OY6odu_5K_Zbti1OxVuGrsyJcwj/view?usp=sharing


# Relation with Other Patterns:
- Many designs start by using **Factory Method** (less complicated and more customizable via subclasses) and evolve toward Abstract Factory, Prototype, or Builder (more flexible, but more complicated).
- Builder focuses on constructing complex objects step by step. Abstract Factory specializes in creating families of related objects. Abstract Factory returns the product immediately, whereas Builder lets you run some additional construction
steps before fetching the product.
- **Abstract Factory** classes are often based on a set of Factory Methods, but you can also use Prototype to compose the methods on these classes.
- **Abstract Factory** can serve as an alternative to Facade when you only want to hide the way the subsystem objects are created from the client code.
Creational Design Patterns / Abstract Factory
- You can use **Abstract Factory** along with **Bridge**. This pairing is useful when some abstractions defined by Bridge can only work with specific implementations. In this case, Abstract Factory can encapsulate these relations and hide the complexity from the client code.
- **Abstract Factories**, **Builders** and **Prototypes** can all be implemented as **Singletons**.
