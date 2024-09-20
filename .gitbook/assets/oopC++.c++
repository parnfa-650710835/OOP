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