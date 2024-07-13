//What is abstract class
//  ----> Abstract class are those class which cant be directly called or intialized.
// their object doesnt created.though you can create it prperties and acccess this propert
// by those sub class which are imheirted from abstract classs

//   what is Abstract function
// those functiion or method which doesnt have the body. their body is defiend in the subclases
// Abstract class
//implement key word is used for inheriting an abastracrt class

void main() {
  Dog dog = Dog();
  dog.sound();
  dog.eat();
  dog.color(); // This line is possible because Dog inherits from Hiberian
}

abstract class Animal {
  void sound();
  void eat();
}

class Hiberian {
  void color() {
    print("color is green");
  }
}

class Dog extends Hiberian implements Animal {
  @override
  void sound() {
    print("bark");
  }

  @override
  void eat() {
    print("eatig");
  }
}
