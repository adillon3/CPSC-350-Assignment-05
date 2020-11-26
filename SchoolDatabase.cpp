/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "SchoolDatabase.h"

SchoolDatabase :: SchoolDatabase()
{
  /*
  if(StudentFile && FacultyFile)
  {
    build from file
  }
  else
  {
    empty file
  }*/
}
SchoolDatabase :: ~SchoolDatabase()
{

}

void SchoolDatabase :: RunDatabase()
{
  //VARIABLES
  int menuChoice;

  cout << endl << endl;
  cout << "Hello and  welcome to school database." << endl << endl;

  do
  {
    menuChoice = GetMenuInput(MAIN_MENU, NUM_MAIN_MENU_OPTIONS);

    cout << endl << endl;

    switch(menuChoice)
    {
      case 1:
        //PrintStudentDatabase();
        break;
      case 2:
        //PrintFacultyDatabase();
        break;
      case 3:
        //PrintStudent();
        break;
      case 4:
        //PrintFaculty(0)
        break;
      case 5:
        //PrintStudentAdvisor();
        break;
      case 6:
        //PrintFacultyAdvisees();
        break;
      case 7:
        AddStudent();
        break;
      case 8:
        //DeleteStudent();
        break;
      case 9:
        //AddFaculty();
        break;
      case 10:
        //DeleteFaculty();
        break;
      case 11:
        //ChangeStudentAdvisor();
        break;
      case 12:
        //RemoveAdvisee()
        break;
      case 13:
        //Rollback();
        break;
      default:
        break;
    }
  } while(menuChoice != NUM_MAIN_MENU_OPTIONS);


  //PrintStudentTreeToFile();
  //PrintFacultyTreeToFile();

  cout << "END\n\n";
}

int SchoolDatabase :: GetMenuInput(const string initialMessage, const int numMenuOptions)
{
  bool valid = false;
  int menuChoice = 0;

  do
  {
    cout << initialMessage;
    cin >> menuChoice;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter numeric input.\n\n";

      valid = false;
    }
    else if(menuChoice > 0 && menuChoice <= numMenuOptions)
    {
      valid = true;
    }
    else
    {
      cout << "\nSorry, please enter a value between 1 and " << numMenuOptions << endl << endl;
      valid = false;
    }

  } while(!valid);
}



void SchoolDatabase :: PrintStudentDatabase()
{}
void SchoolDatabase :: PrintFacultyDatabase()
{}
void SchoolDatabase :: PrintStudent()
{}
void SchoolDatabase :: PrintFaculty()
{}
void SchoolDatabase :: PrintStudentAdvisor()
{}
void SchoolDatabase :: PrintFacultyAdvisees()
{}
void SchoolDatabase :: AddStudent()
{
  bool valid = false;;

  int    newID = GenerateStudentID();
  string newFirstName;
  string newLastName;
  string newStudentLevel;
  string newMajor;
  double newGPA;
  int    newAdvisorID;


  cin.ignore(100000000, '\n');

  cout << "Please enter student data:\n";
  cout << "Student's first name: ";
  getline(cin, newFirstName);

  cout << "Student's last name: ";
  getline(cin, newLastName);

  cout << "Student's level: ";
  getline(cin, newStudentLevel);

  cout << "Student's major: ";
  getline(cin, newMajor);

  //Validating GPA
  do
  {
    cout << "Student's GPA: ";
    cin >> newGPA;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter a valid numeric GPA input.\n\n";

      valid = false;
    }
    else if(newGPA >= 0)
    {
      valid = true;
    }
    else
    {
      cout << "\nSorry, please enter a positive value.\n\n";
      valid = false;
    }

  } while(!valid);

  //validating Advisor ID
  do
  {
    cout << "Student's Advosir's ID: ";
    cin >> newAdvisorID;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter a numeric advisor ID.\n\n";

      valid = false;
    }
    else if(newAdvisorID < 0)
    {
      cout << "\nSorry, please enter a positive value.\n\n";
      valid = false;
    }
    else
    {
      /*
      if(SearchTreeForFacultyID(newAdvisorID))
      {
        cout << "Sorry, that faculty ID, does not correspond with any current members of our team.\n";
        cout << "Enter \"L\" if you would like to see a list of all faculty members.  Enter \"\" if you would like to enter a new Advisor ID"
        valid = false;
      }
      else
      {*/
        valid = true;
      //}

    }

  } while(!valid);

  Student newStudent(newID, newFirstName, newLastName, newStudentLevel,
    newMajor, newGPA, newAdvisorID);


  studentTree.InsertNode(newStudent);

  cout << newFirstName << " " << newLastName << " has been entered into the system and given the ID Number: " << newID << endl << endl;


  studentTree.InOrder();

}
void SchoolDatabase :: DeleteStudent()
{}
void SchoolDatabase :: AddFaculty()
{}
void SchoolDatabase :: DeleteFaculty()
{}
void SchoolDatabase :: ChangeStudentAdvisor()
{}
void SchoolDatabase :: RemoveAdvisee()
{}
void SchoolDatabase ::  Rollback()
{}



int SchoolDatabase ::  GenerateStudentID()
{
  bool valid = false;
  int randomValue;

  do
  {
    //genereate number
    randomValue = rand() % 10000 + 60000;

    //Check if number is already in tree
    /*
    if()
    {

    }*/

    valid = true;


  } while(!valid);

  return randomValue;
}
int SchoolDatabase ::  GenerateFacultyID()
{

}
