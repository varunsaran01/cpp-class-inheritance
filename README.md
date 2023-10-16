# C++ Class Inheritance

This repository contains examples and explanations of class inheritance in C++. Inheritance is a fundamental object-oriented programming concept that allows you to create new classes (derived classes) based on existing classes (base classes). This README provides an overview of how to work with class inheritance in C++.

## Table of Contents
- [Class Inheritance](#class-inheritance)
  - [Defining Base and Derived Classes](#defining-base-and-derived-classes)
  - [Access Control](#access-control)
  - [Constructor and Destructor Inheritance](#constructor-and-destructor-inheritance)
  - [Overriding Member Functions](#overriding-member-functions)
- [Examples](#examples)

## Class Inheritance

### Defining Base and Derived Classes

In C++, you can define a base class and then create derived classes that inherit properties and behaviors from the base class. Here's an example:

```cpp
class Shape {
public:
    double getArea() {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() {
        return 3.14159 * radius * radius;
    }
};
```

In this example, `Shape` is the base class, and `Circle` is the derived class that inherits from `Shape`.

### Access Control

C++ supports access control for base class members in derived classes. You can use `public`, `protected`, or `private` access specifiers when inheriting:

```cpp
class Base {
public:
    int publicMember;
protected:
    int protectedMember;
private:
    int privateMember;
};

class DerivedPublic : public Base {
    // 'publicMember' is accessible here
    // 'protectedMember' is accessible here
    // 'privateMember' is not accessible here
};

class DerivedProtected : protected Base {
    // 'publicMember' is protected here
    // 'protectedMember' is protected here
    // 'privateMember' is not accessible here
};

class DerivedPrivate : private Base {
    // 'publicMember' is private here
    // 'protectedMember' is private here
    // 'privateMember' is not accessible here
};
```

### Constructor and Destructor Inheritance

Constructors and destructors are inherited but not automatically called by derived classes. You can explicitly call the base class constructor and destructor from the derived class:

```cpp
class Base {
public:
    Base() {
        // Base class constructor
    }

    ~Base() {
        // Base class destructor
    }
};

class Derived : public Base {
public:
    Derived() : Base() {
        // Derived class constructor
    }

    ~Derived() {
        // Derived class destructor
    }
};
```

### Overriding Member Functions

Derived classes can override base class member functions to provide their own implementations:

```cpp
class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class" << std::endl;
    }
};
```

In this example, the `print` function in the `Derived` class overrides the `print` function in the `Base` class.


# C++ Inheritance Examples

This repository contains a collection of C++ programs that demonstrate various types of inheritance, including general inheritance, single inheritance, multiple inheritance, multilevel inheritance, and hierarchical inheritance. This README provides separate algorithms for each code.

## Table of Contents
- [General Inheritance (Part 1)](#general-inheritance-part-1)
- [Single Inheritance (Part 2)](#single-inheritance-part-2)
- [Multiple Inheritance (Part 3)](#multiple-inheritance-part-3)
- [Multilevel Inheritance (Part 4)](#multilevel-inheritance-part-4)
- [Hierarchical Inheritance (Part 5)](#hierarchical-inheritance-part-5)


---

## General Inheritance (Part 1)

### Algorithm

1. Start
2. Define a base class named `Vehicle` with the following properties:
   - A string `brand` initialized to "Ford_"
   - A member function `color()` that prints "Red!" to the console.
3. Define a derived class named `Car` that inherits from the `Vehicle` base class.
4. In the `main` function, create an object `myCar` of the `Car` class.
5. Call the `color()` function on `myCar` to print "Red!" to the console.
6. Display the combination of `myCar`'s `brand` and `model`.
7. End

### Code
```cpp
// ... (Part 1 code)
```

---

## Single Inheritance (Part 2)

### Algorithm

1. Start
2. Define a base class named `name` with a constructor that prints "This is Pranav" to the console.
3. Define a derived class named `Firstname` that inherits from the `name` base class.
4. In the `main` function, create an object `obj` of the `Firstname` class.
5. The constructor of the `name` base class is called, printing "This is Pranav" to the console.
6. End

### Code
```cpp
// ... (Part 2 code)
```

---

## Multiple Inheritance (Part 3)

### Algorithm

1. Start
2. Define a class named `mammal` with a constructor that prints "mammal is an animal" to the console.
3. Define a class named `wingedanimal` with a constructor that prints "winged animal can flap" to the console.
4. Define a class named `bat` that inherits from both `mammal` and `wingedanimal`.
5. In the `main` function, create an object `b1` of the `bat` class.
6. The constructors of both `mammal` and `wingedanimal` classes are called, printing their respective messages to the console.
7. End

### Code
```cpp
// ... (Part 3 code)
```

---

## Multilevel Inheritance (Part 4)

### Algorithm

1. Start
2. Define a class named `Pranav` with a constructor that prints "This is Pranav" to the console.
3. Define a class named `name` that inherits from `Pranav`.
4. Define a class named `Fullname` that inherits from `name`.
5. In the `main` function, create an object `obj` of the `Fullname` class.
6. The constructors of `Pranav` and `name` classes are called, printing "This is Pranav" to the console.
7. End

### Code
```cpp
// ... (Part 4 code)
```

---

## Hierarchical Inheritance (Part 5)

### Algorithm

1. Start
2. Define a base class named `colour` with a member function `show_colour()` that prints "class colour" to the console.
3. Define two derived classes, `Blue` and `Orange`, both inheriting from `colour`.
4. In the `main` function, create objects `b` and `c` of the `Blue` and `Orange` classes, respectively.
5. Call the `show_Blue()` function on `b` to print "class Blue" to the console.
6. Call the `show_colour()` function on `b` to print "class colour" to the console.
7. Call the `show_Orange()` function on `c` to print "class Orange" to the console.
8. Call the `show_colour()` function on `c` to print "class colour" to the console.
9. End

### Code
```cpp
// ... (Part 5 code)
```

---
