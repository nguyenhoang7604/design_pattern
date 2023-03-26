# What is the Visitor Design Pattern?
- **Visitor** is a behavioral design pattern that lets you separate algorithms from the objects on which they operate.

# When to use the the Visitor Pattern?
- Allows you to add methods to classes of different types without much altering to those classes.
- You can make completely different methods depending on the class used.
- Allow you to define external classes that can extend other classes without majorly editing them.

# Pros:
- Open/Closed Principle. You can introduce a new behavior that can work with objects of different classes without changing these classes.
- Single Responsibility Principle. You can move multiple versions of the same behavior into the same class.
- A visitor object can accumulate some useful information while working with various objects. This might be handy when you want to traverse some complex object structure, such as an object tree, and apply the visitor to each object of this structure.
# Cons:
- You need to update all visitors each time a class gets added to or removed from the element hierarchy.
- Visitors might lack the necessary access to the private fields and methods of the elements that they’re supposed to work with.

# UML Design: https://drive.google.com/file/d/1r-gFibtyTDENMFwCGJfm6L8WPlF2sjkA/view?usp=sharing

# Relation with Other Patterns
- You can treat **Visitor** as a powerful version of the **Command** pattern. Its objects can execute operations over various objects of different classes.
- You can use **Visitor** to execute an operation over an entire **Composite** tree.
- You can use **Visitor** along with **Iterator** to traverse a complex data structure and execute some operation over its elements, even if they all have different classes.
