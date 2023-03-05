Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects
about any events that happen to the object they’re observing.

When to use the the Strategy Pattern?
- When you want to define class that will have one behavior that is similar to other behaviors in a list
    - Ex: I want the class object to be able to choose from:
        - Not Flying | Fly With Wings | Fly Supper Fast
- When you need to use one of several behaviors dynamically

Cons:
    - Often reduces long lists conditionals
    - Avoid duplicate code
    - Keeps class changes from forcing other class changes
    - Can hide compilcated / secret code from the user

Solution:
    - Increased number of Objects / Classes.

UML Design: https://drive.google.com/file/d/1_-fiy9FMN9ndUvQtEzd_iAonYr-L-ghi/view?usp=sharing