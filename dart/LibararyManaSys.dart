// void main() {
//   Book book1 = Book("Got", "w.r leee", "111111", true);
//   Book book2 = Book("aot", "j k worling", "111112", true);
//   Book book3 = Book("harry pottter", "j k rowling", "111113", true);
//   Book book4 = Book("house of dragon", "g.g. martin", "111114", true);
//   Book book5 = Book("is never", "coli havour", "111115", true);
//   Book book6 = Book("twilight", "hoveerr", "111116", true);

//   Libaray libarary = Libaray();
//   libarary.addBook(book1);
//   libarary.addBook(book2);
//   libarary.addBook(book3);
//   libarary.addBook(book4);
//   libarary.addBook(book5);
//   libarary.addBook(book6);
//   //libarary.listBook();

//   Member member1 = Member("123", "Abhishek");
//   Member member2 = Member("124", "rohan");
//   Member member2 = Member("125", "shyam");
//   Member member3 = Member("126", "aman");
// }

// class Book {
//   String title;
//   String author;
//   String bookid;
//   bool isAvailable;

//   Book(this.title, this.author, this.bookid, this.isAvailable);
// }

// class Libaray {
//   List<Book> books = [];
//   void addBook(Book book) {
//     books.add(book);
//   }

//   void listBook() {
//     books.forEach((element) {
//       print(
//           "Book Name  :  ${element.title} \n Writteen by  : ${element.author} \n Book id is : ${element.bookid} \n Book availble : ${element.isAvailable} \n \n \n \n");
//     });
//   }
// }

// class Member {
//   String memberName;
//   String memberId;
//   Member(this.memberId, this.memberName);
// }

// class Loan {
//   Book book;
//   Member member;
//   DateTime entryTime;
//   DateTime? returnTime;
//   Loan(this.book, this.member, this.entryTime, this.returnTime);

//   void returnBook()
// }
