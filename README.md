---
description: เปรียบเทียบโค้ด OOP ในภาษา Java, Python, C++
icon: pencil
---

# OOP

## Java

```
class Animal {
    Animal() {
        System.out.println("create animal");
    }

    protected void finalize() {
        System.out.println("delete animal");
    }

    public void sound() {
        System.out.println("animal makes a sound");
    }
}

class Dog extends Animal {
    Dog() {
        System.out.println("dog");
    }

    protected void finalize() {
        System.out.println("delete dog");
    }

    public void sound() {
        System.out.println("dog barks");
    }
}

class Cat extends Animal {
    Cat() {
        System.out.println("cat");
    }

    protected void finalize() {
        System.out.println("delete cat");
    }

    public void sound() {
        System.out.println("cat meows");
    }
}

public class oopJava {
    public static void main(String[] args) {
        Animal a = new Animal();
        Dog d = new Dog();
        Cat c = new Cat();

        a.sound();
        d.sound();
        c.sound();

        a = null;
        d = null;
        c = null;
        System.gc();
    }
}
```

## Python

```
class Animal:
    def __init__(self):
        print("create animal")

    def __del__(self):
        print("delete animal")
    
    def sound(self):
        print("animal makes a sound")

class Dog(Animal):
    def __init__(self):
        super().__init__()
        print("dog")

    def __del__(self):
        print("delete dog")
        super().__del__()
    
    def sound(self):
        print("dog barks")

class Cat(Animal):
    def __init__(self):
        super().__init__()
        print("cat")

    def __del__(self):
        print("delete cat")
        super().__del__()
    
    def sound(self):
        print("cat meows")


a = Animal()
d = Dog()
c = Cat()

a.sound()
d.sound()
c.sound()

del a
del d
del c
```

## C++

```
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(){
        cout << "create animal"<< endl;
    }

    virtual ~Animal() {
        cout << "delete animal"<< endl;
    }
    
    virtual void sound(){
        cout << "animal makes a sound"<< endl;
    }

};

class Dog : public Animal {
    public:
    Dog(){
        cout << "create dog"<< endl;
    }

    ~Dog() {
        cout << "delete dog"<< endl;
    }
    
    void sound() override {
        cout << "dog barks"<< endl;
    }
};

class Cat : public Animal {
    public:
    Cat(){
        cout << "create cat"<< endl;
    }

    ~Cat() {
        cout << "delete cat"<< endl;
    }
    
    void sound() override {
        cout << "cat moews"<< endl;
    }
};

int main(){
    Animal* a = new Animal();
    Dog* d = new Dog();
    Cat* c = new Cat();

    a->sound();
    d->sound();
    c->sound();

    delete a;
    delete d;
    delete c;

    return 0;
}
```
