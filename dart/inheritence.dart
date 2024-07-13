void main() {
  Student student = Student("pce21cs010", "cse", "abhishek", 22);
  student.display();
  student.display1();
}

class Person {
  String? name;
  int? age;
  void display1() {
    print("name : ${name} \n age : ${age}");
  }

  Person(this.name, this.age) {
    print("parent class called");
  }
}

class Student extends Person {
  String? stdid;
  String? stdbranch;

  Student(this.stdid, this.stdbranch, String name, int age) : super(name, age) {
    print("child class called");
  }
  void display() {
    print("stdid : ${stdid} \n stdbranch : ${stdbranch}");
  }
}
