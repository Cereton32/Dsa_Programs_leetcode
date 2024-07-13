import 'encapsulation.dart';

void main() {
  Profile student1 = Profile("abhsihek", 22, "java developer");
  student1.namechange = "shyam";
  student1.nameChange2nd("aman");
  print(student1.name);
}
