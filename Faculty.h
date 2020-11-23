/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef FACULTY_H_
 #define FACULTY_H_

 #include "Person.h"
 #include "DoublyLinkedList.h"

 class Faculty : public Person
 {
 public:
  Faculty(int newID, string newFirstName, string newLastName, string newFacultyLevel, string newDepartment);
  ~Faculty();

  //getters and setters
  string GetFacultyLevel();
  string GetDepartment();
  DoublyLinkedList<int> GetAdviseesIDs();
  void SetFacultyLevel();
  void SetDepartment();
  void AddAdvisee(int newAdvisee);
  void RemoveAdvisee(int newAdvisee);


  //virtual methods
  void PrintPerson(ostream& oFile);

  //methods fom super
  /*
  int GetID();
  string GetFirstName();
  string GetLastName();
  void SetFirstName(string newFirstName);
  void SetLastName(string newLastName);*/

 private:
  static int makeFacultyID();

  string facultyLevel;
  string department;
  DoublyLinkedList<int> adviseesIDs;



 };

  #endif // FACULTY_H_
