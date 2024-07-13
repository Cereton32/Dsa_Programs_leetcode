// int main() {
//   List<Profile> students = [
//     Profile("abhishek", "22"),
//     Profile("rohan", "33"),
//     Profile("Satish", "44")
//   ];

//   students.forEach((element) {
//     element.displayInfo();
//   });
//   return 0;
// }

// class Profile {
//   String? name1;
//   String? age1;

//   // Constructor for both name and age
//   Profile(String name, String age);

//   void displayInfo() {
//     try {
//       print("The user name is $name1 and the age of the user is $age1");
//     } catch (e) {
//       print(e);
//     }
//   }
// }





int main() {
  List<Profile> students = [
    Profile(name1: 'abhishek',age1: "32"),
    Profile(name1: "rohan",age1: "33"),
    Profile(name1: "mohan",age1: "99"),
    Profile(name1: "soha ",age1: "32")
  
  ];

  students.forEach((element) {
    element.displayInfo();
  });
  return 0;
}

class Profile {
  String? name1;
  String? age1;

  // Constructor for both name and age
  Profile({this.name1='',required this.age1});

  void displayInfo() {
    try {
      print("The user name is $name1 and the age of the user is $age1");
    } catch (e) {
      print(e);
    }
  }
}