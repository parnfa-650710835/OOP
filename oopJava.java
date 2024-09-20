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
