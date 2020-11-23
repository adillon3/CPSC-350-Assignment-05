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
  Person();
  ~Person();

  //getters and setters
  int getPersonID();
  string getFirstName();
  string getLastName();
  void setPersonID();
  void setFirstName();
  void setLastName();

private:
  int    personID;
  string firstName;
  string lastName;
};

 #endif // PERSON_H_
