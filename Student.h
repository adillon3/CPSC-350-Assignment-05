/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef STUDENT_H_
 #define STUDENT_H_

 #include "Person.h"

 class Student : public Person
{
public:
  Student(int newID, string newFirstName, string newLastName);
  ~Student();

  //getters and setters
  int GetID();
  string GetFirstName();
  string GetLastName();
  void SetFirstName(string newFirstName);
  void SetLastName(string newLastName);

  //virtual methods
  void printPerson();

private:
  static int getID();

  string studentLevel;
  string major;
  double gpa;
  int    advisor;
};

 #endif // STUDENT_H_
