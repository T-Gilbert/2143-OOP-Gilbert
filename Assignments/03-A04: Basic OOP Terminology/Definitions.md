## A05

- Name: Trevor Gilbert
- Date: 01 May 2023
- Class: 2143 OOP

## Definitions

#### Abstraction

> The process of hiding the internal details of an application from the outer world

- There are two types of abstraction: Data & Process

- Data Abstraction - When the object data is not visible to the outer world, it creates data abstraction. If needed, access to the Objects’ data is provided through various different methods

- Process Abstration - When we don’t need to provide details about all the functions of an object, and we hide the internal implementation of the different functions involved in a user operation, it creates process abstraction
>
><img src="[https://ds055uzetaobb.cloudfront.net/image_optimizer/722c82aff075a14313be7fa7463f7fedad151a0a.png](https://journaldev.nyc3.digitaloceanspaces.com/2019/09/data-abstraction.png)" width=250>

#### Attributes / Properties

> An attribute denotes a part of an aggregate object, and so is used during analysis as well as design to express a singular property of the class 

#### Class

> A user-defined data types that act as the blueprint for individual objects, attributes and methods

#### Class Variable

> An attribute defined in a class of which a single copy exists, regardless of how many instances of the class exist. All instances of that class share its value as well as its declaration.

#### Composition

> A concept in OOP that models the relationship between two classes. It involves using other classes to build more complex classes, and there is no parent/child relationship.

- Represents a "has-a" relationship

- There are two types of composition: Association and Aggregation.

- Association - You usually see the parts that build the whole object

- Aggregation - Typically, you only see the object as a whole

#### Constructor

> A special method of a class or structure that initializes a newly created object of that type

- Whenever an object is created, the constructor is called automatically

- Although it resembles it, a constructor is not a proper method since it doesn’t have a return type

#### Encapsulation

> The bundling of data and methods that operate on that data within a single unit

- Makes testing systems more efficient & easier

#### Friends

> A function that is given the same access as methods to private and protected data

- Declared by the class that is granting access, so friend functions are part of the class interface (like methods)

#### Inheritance

> A mechanism in which you can derive a class from another class, creating a hierarchy of classes that share a set of attributes and methods

- Weakens encapsulation, so may not be appropriate for applications where higher protection is required

#### Instance Variable

> A variable defined in a class, for which each instantiated object of the class has a separate copy or instance. (i.e., a member variable)

#### Member Variable

> A variable in a method or block of code that is linked to a specific object, becoming accessible for all of that objects methods

- May also be reffered to as a member field

#### Method

> A programmed procedure associated with a message and a spefified object

- Part of a class, available to any object instantiated from that class

#### Multiple Inheritance

> Simply means that a subclass can inherit from TWO or more superclasses

- Example: Two superclasses, one is a Lion, the other is a Tiger. Through multiple inheritance, they produce the Liger 

#### EXAMPLE Class

> This is your definition of what a class is. Using images is A-ok. For example: 
>
><img src="https://ds055uzetaobb.cloudfront.net/image_optimizer/722c82aff075a14313be7fa7463f7fedad151a0a.png" width=250>


#### Object 

> An instance of a class, created with specifically difined data. 

- A 'class' will create a template for objects. In fact, many objects can be created from the same class type

#### Overloading 

> When TWO or more functions have the same name, however, they contain different parameters

- Better known as 'function overloading.'

- Done by either using different types of arguments, or a different number of arguments

#### Polymorphism 

> A feature of object-oriented programming which allows a specific routine to utilize variable of different types, but at different times

#### Public / Private / Protected - "Access Modifiers"

> Public: In which the method or property can be accessed from everywhere in the code/program

- This is the default access modifier in C++, also the least secure

> Protected: Wherein the method or property can be accessed within the class, and by classes that are derived from that class

- Increasingly secure in applications requiring that asset 

> Private: With this, the method or property can ONLY be accessed within the class

- Most secure, when applications require it

#### Static 

> When a method or variable is declared 'static,' it belongs to the class, rather than a specific instance

- Only ONE instance of a static member exists, even if you create multiple objects of the class, or if you don't create any

#### Virtual

> A 'virtual' function is a method or function used to override the behavior of the function in an inherited class

- Virtual methods facilitate the consistent functionality of a related object set
