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
><img src="https://journaldev.nyc3.digitaloceanspaces.com/2019/09/data-abstraction.png" width=300>

#### Attributes / Properties

> An attribute denotes a part of an aggregate object, and so is used during analysis as well as design to express a singular property of the class 
>
><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/98/CPT-OOP-objects_and_classes_-_attmeth.svg/300px-CPT-OOP-objects_and_classes_-_attmeth.svg.png" width=300>

#### Class

> A user-defined data types that act as the blueprint for individual objects, attributes and methods
>
><img src="https://www.freeonlinetest.in/tutorials/wp-content/uploads/2022/09/class_oops_in_php.jpg" width=400>

#### Class Variable

> An attribute defined in a class of which a single copy exists, regardless of how many instances of the class exist. All instances of that class share its value as well as its declaration.
>
><img src="https://i.ytimg.com/vi/czw5TYk4H5U/maxresdefault.jpg" width=300>

#### Composition

> A concept in OOP that models the relationship between two classes. It involves using other classes to build more complex classes, and there is no parent/child relationship.

- Represents a "has-a" relationship

- There are two types of composition: Association and Aggregation.

- Association - You usually see the parts that build the whole object

- Aggregation - Typically, you only see the object as a whole
>
><img src="https://files.realpython.com/media/Inheritance-vs-Composition-in-Python_Watermarked_1.aec726368a97.jpg" width=300>

#### Constructor

> A special method of a class or structure that initializes a newly created object of that type

- Whenever an object is created, the constructor is called automatically

- Although it resembles it, a constructor is not a proper method since it doesn’t have a return type
>
><img src="https://2.bp.blogspot.com/-t1ktWXQrC-o/WRaunNoeSzI/AAAAAAAAAZ8/VmHfCohuER4HJ_tcredrTOIU5_s5TJL7ACLcB/s1600/constructor%2Bin%2Bjava.png" width=300>

#### Encapsulation

> The bundling of data and methods that operate on that data within a single unit

- Makes testing systems more efficient & easier
>
><img src="https://www.scientecheasy.com/wp-content/uploads/2018/06/encapsulation-in-java.png" width=300>

#### Friends

> A function that is given the same access as methods to private and protected data

- Declared by the class that is granting access, so friend functions are part of the class interface (like methods)
>
><img src="https://media.geeksforgeeks.org/wp-content/uploads/20220802105339/FriendFunctioninC-660x328.png" width=300>

#### Inheritance

> A mechanism in which you can derive a class from another class, creating a hierarchy of classes that share a set of attributes and methods

- Weakens encapsulation, so may not be appropriate for applications where higher protection is required
>
><img src="https://corejava25hours.files.wordpress.com/2023/01/1_rddnpqyoebl_jq3rmet5dg.png" width=300>

#### Instance Variable

> A variable defined in a class, for which each instantiated object of the class has a separate copy or instance. (i.e., a member variable)
>
><img src="https://images.velog.io/images/jiselectric/post/325a4754-4aee-471e-8743-99d58f188417/6.15.png" width=300>

#### Member Variable

> A variable in a method or block of code that is linked to a specific object, becoming accessible for all of that objects methods

- May also be reffered to as a member field
>
><img src="https://1.bp.blogspot.com/-b-snzBFnoHs/Vu6rs2fUoqI/AAAAAAAAAXQ/CPUenSOSJKsZTxWqwWwn0v-DZde8f8GNQ/s1600/memberVariables.JPG" width=400>

#### Method

> A programmed procedure associated with a message and a spefified object

- Part of a class, available to any object instantiated from that class
>
><img src="https://raw.githubusercontent.com/andrejrs/Object-Oriented-PHP/master/images/object.gif" width=300>

#### Multiple Inheritance

> Simply means that a subclass can inherit from TWO or more superclasses

- Example: Two superclasses, one is a Lion, the other is a Tiger. Through multiple inheritance, they produce the Liger 
>
><img src="https://1.bp.blogspot.com/-k0wGmviy5X0/V_Y2ga7SMtI/AAAAAAAAATY/96X-LT9lpWkZE4WtjTzpIxDAfhU5I9DQgCEw/s1600/Multiple-Inheritance.png" width=300>

#### Object 

> An instance of a class, created with specifically difined data. 

- A 'class' will create a template for objects. In fact, many objects can be created from the same class type
>
><img src="https://miro.medium.com/v2/resize:fit:1400/1*CM0Jy_kA06FwPx0O432RxA.png" width=300>

#### Overloading 

> When TWO or more functions have the same name, however, they contain different parameters

- Better known as 'function overloading.'

- Done by either using different types of arguments, or a different number of arguments
>
><img src="https://www.edureka.co/blog/wp-content/uploads/2019/07/mov.png" width=300>

#### Polymorphism 

> A feature of object-oriented programming which allows a specific routine to utilize variable of different types, but at different times
>
><img src="https://www.upgrad.com/blog/wp-content/uploads/2020/11/cpp-polymorphism.png" width=300>

#### Public / Private / Protected - "Access Modifiers"

> Public: In which the method or property can be accessed from everywhere in the code/program

- This is the default access modifier in C++, also the least secure

> Protected: Wherein the method or property can be accessed within the class, and by classes that are derived from that class

- Increasingly secure in applications requiring that asset 

> Private: With this, the method or property can ONLY be accessed within the class

- Most secure, when applications require it
>
><img src="https://2558458775-files.gitbook.io/~/files/v0/b/gitbook-legacy-files/o/assets%2F-LSemf7mp1liQa7nfIAC%2F-LTHEM6kWTPDoO0A7Vxu%2F-LTHFx9RAqKA1Kc2l2cj%2FScreen%20Shot%202018-12-09%20at%202.49.19%20PM.png?alt=media&token=f6d4bbe5-7ad5-4029-8f36-bfbf53599694" width=500>

#### Static 

> When a method or variable is declared 'static,' it belongs to the class, rather than a specific instance

- Only ONE instance of a static member exists, even if you create multiple objects of the class, or if you don't create any
>
><img src="https://www.codeash.com/wp-content/uploads/2021/03/20210305_163434-300x300.png" width=300>

#### Virtual

> A 'virtual' function is a method or function used to override the behavior of the function in an inherited class

- Virtual methods facilitate the consistent functionality of a related object set
>
><img src="https://i.ytimg.com/vi/BnKvXjUro-Q/hqdefault.jpg" width=300>
