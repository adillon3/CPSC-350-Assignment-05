/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "Person.h"


Person :: Person(int newID, string newFirstName, string newLastName)
{
  id = newID;
  firstName = newFirstName;
  lastName = newLastName;
}

Person :: ~Person()
{}

//getters and setters
int Person :: GetID()
{
  return id;
}
string Person :: GetFirstName()
{
  return firstName;
}
string Person :: GetLastName()
{
  return lastName;
}
void Person :: SetFirstName(string newFirstName)
{
  firstName = newFirstName;
}
void Person :: SetLastName(string newLastName)
{
  lastName = newLastName;
}

//virtual methods
void Person :: printPerson()
{}
