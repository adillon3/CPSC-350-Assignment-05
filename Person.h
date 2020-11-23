/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef PERSON_H_
 #define PERSON_H_

 #include <iostream>
 using namespace std;

 #include <string>
 #include <fstream>

class Person
{
public:
  Person(int newID, string newFirstName, string newLastName);
  ~Person();

  //getters and setters
  int GetID();
  string GetFirstName();
  string GetLastName();
  void SetFirstName(string newFirstName);
  void SetLastName(string newLastName);

  //virtual void printPerson();

private:
  int    id;
  string firstName;
  string lastName;
};

 #endif // PERSON_H_
