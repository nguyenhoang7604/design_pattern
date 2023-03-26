Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects
about any events that happen to the object they’re observing.

When to use the Observer Design Pattern?
- When you need many other objects to receive an update when another object chances
    - Stock market with thousands of stocks needs to send updates to objects representing individual stocks
    - The Subject (Publisher) sends many stocks to the Observers
    - The Observers (Subscribers) takes the ones they want and use them

- Loose coupling is a benefit
    - The Subject (Publisher) doesn't need to know anything about the Observers

Cons:
    - Subscribers are notified in random order
Solution:
    - Add priority when subscribe and Sort the list before sending the notification.

UML Design: https://drive.google.com/file/d/1RqI56EI3H0N6kYnrHlDcr2oAATDnPCmP/view?usp=sharing