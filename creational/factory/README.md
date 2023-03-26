# What is Factory Pattern?
**Factory Method** is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.

# When to use the the Factory Pattern?
- When a method returns one of several possible classes that share a common super class
- When you don't know ahead of time what class object you need
- To centralize class selection code
- When you don't want the user to have to know every subclass
- To encapsulate object creation.
- Example
	_- Create a new enemy in a game_
	_- Random number generator picks a number assigned to a specific enemy_
	_- The factory returns the enemy assosiated with that number_

# Pros:
- You avoid tight coupling between the creator and the concrete products
- Single Responsibility Principle. You can move the product creation code into one place in the program, making the code easier to support.
- Open/Closed Principle. You can introduce new types of products into the program without breaking existing client code.

# Cons:
- The code may become more complicated since you need to introduce a lot of new subclasses to implement the pattern. The best case scenario is when you’re introducing the pattern into an existing hierarchy of creator classes.

# UML Design: https://drive.google.com/file/d/1ta7r9YMGIipjIOePHtKjAlQbhsinicfo/view?usp=sharing


# Relation with Other Patterns:
- Many designs start by using Factory Method (less complicated and more customizable via subclasses) and evolve toward Abstract Factory, Prototype, or Builder (more flexible, but more complicated).

- **Abstract Factory** classes are often based on a set of Factory Methods, but you can also use Prototype to compose the methods on these classes.

- You can use **Factory Method** along with **Iterator** to let collection subclasses return different types of iterators that are compatible with the collections.

- Prototype isn’t based on inheritance, so it doesn’t have its drawbacks. On the other hand, Prototype requires a complicated initialization of the cloned object. Factory Method is based on inheritance but doesn’t require an initialization step.

- **Factory Method** is a specialization of Template Method. At the same time, a Factory Method may serve as a step in a large Template Method.