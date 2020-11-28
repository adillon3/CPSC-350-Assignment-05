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
  if(CheckFileNameValid(studentFile) && CheckFileNameValid(FacultyFile))
  {
    DeserializeStudents();
    DeserializeFaculty();
  }
  */
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
        PrintStudentDatabase();
        break;
      case 2:
        PrintFacultyDatabase();
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
        DeleteStudent();
        break;
      case 9:
        AddFaculty();
        break;
      case 10:
        DeleteFaculty();
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

  SerializeStudents();
  SerializeFaculty();

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
{
  cout << "Current Students\n";
  studentTree.InOrder();
}
void SchoolDatabase :: PrintFacultyDatabase()
{
  cout << "School Staff\n";
  facultyTree.InOrder();
}
void SchoolDatabase :: PrintStudent()
{

}
void SchoolDatabase :: PrintFaculty()
{

}
void SchoolDatabase :: PrintStudentAdvisor()
{

}
void SchoolDatabase :: PrintFacultyAdvisees()
{

}
void SchoolDatabase :: AddStudent()
{
  bool valid = false;

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

  cout << endl << newFirstName << " " << newLastName << " has been entered into the system and given the ID Number: " << newID << endl << endl;
}
void SchoolDatabase :: DeleteStudent()
{
  bool valid = false;
  int studentIDToDelete;


  do
  {
    cout << "Enter the ID of the Student to remove: ";
    cin >> studentIDToDelete;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter a valid numeric Student ID.\n\n";

      valid = false;
    }
    else if(studentIDToDelete > 0)
    {
      valid = true;
    }
    else
    {
      cout << "\nSorry, please enter a positive value.\n\n";
      valid = false;
    }

  } while(!valid);


  Student studentToDelete(studentIDToDelete);

  if(studentTree.DeleteNode(studentToDelete))
  {
    cout << studentIDToDelete << " was removed from the system\n";
  }
  else
  {
    cout << studentIDToDelete << " could not be found in the system.\n";
  }
}
void SchoolDatabase :: AddFaculty()
{
  bool valid = false;;

  int    newID = GenerateFacultyID();
  string newFirstName;
  string newLastName;
  string newFacultyLevel;
  string newDepartment;
  string newAdviseeID;
  DoublyLinkedList<int> newAdviseesIDsList;


  cin.ignore(100000000, '\n');

  cout << "Please enter faculty memeber data:\n";
  cout << "Faculty memeber's first name: ";
  getline(cin, newFirstName);

  cout << "Faculty memeber's last name: ";
  getline(cin, newLastName);

  cout << "Faculty memeber's level: ";
  getline(cin, newFacultyLevel);

  cout << "Faculty memeber's department: ";
  getline(cin, newDepartment);

  Faculty newFaculty(newID, newFirstName, newLastName, newFacultyLevel,
    newDepartment, newAdviseesIDsList);


  facultyTree.InsertNode(newFaculty);

  cout << newFirstName << " " << newLastName << " has been entered into the system and given the ID Number: " << newID << endl << endl;

}
void SchoolDatabase :: DeleteFaculty()
{
  bool valid = false;
  int facultyToDelete;

  do
  {
    cout << "Enter the ID of the Faculty member to remove: ";
    cin >> facultyToDelete;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter a valid numeric Faculty ID.\n\n";

      valid = false;
    }
    else if(facultyToDelete > 0)
    {
      valid = true;
    }
    else
    {
      cout << "\nSorry, please enter a positive value.\n\n";
      valid = false;
    }

  } while(!valid);

  if(facultyTree.DeleteNode(facultyToDelete))
  {
    cout << facultyToDelete << " was removed from the system\n";
  }
  else
  {
    cout << facultyToDelete << " could not be found in the system.\n";
  }
}
void SchoolDatabase :: ChangeStudentAdvisor()
{

}
void SchoolDatabase :: RemoveAdvisee()
{

}
void SchoolDatabase ::  Rollback()
{

}


bool CheckFileNameValid(string& fileName)
{
  ifstream inFile;
  bool valid = false;

  inFile.open(fileName.c_str());

  //check if file exists
  if(inFile)
  {
    valid = true; //is valid
  }
  else
  {
    valid = false; //repeat loop
  }

  inFile.close();

  return valid;
}

bool GetYesOrNoInput(const string initialMessage)
{
  char gameChoice;
  bool invalidInput = true;

  cout << initialMessage << endl;

  do
  {
    cout << "Please enter either \'Y\' for \"Yes\" or \'N\' for \"No\": ";
    cin.get(gameChoice);
    cin.ignore(100000000, '\n');
    cout << endl;
    gameChoice = toupper(gameChoice);

    if(gameChoice == 'Y' || gameChoice == 'N')
    {
      invalidInput = false;
    }
    else
    {
      invalidInput = true;
      cout << "Sorry, \'" << gameChoice << "\' is invalid.\n";
    }
  }while(invalidInput);

  if(gameChoice == 'Y')
  {
    return true;
  }
  else
  {
    return false;
  }

}

int SchoolDatabase ::  GenerateStudentID()
{
  bool valid = false;
  int randomValue;

  srand(time(0));

  do
  {
    //genereate random 6xxxx number
    randomValue = rand() % 10000 + 60000;

    //Check if number is already in tree
    Student newStudent(randomValue);

    if(studentTree.SearchNode(newStudent))
    {
      valid = false;
    }
    else
    {
      valid = true;
    }

  } while(!valid);

  return randomValue;
}
int SchoolDatabase ::  GenerateFacultyID()
{
  bool valid = false;
  int randomValue;

  srand(time(0));

  do
  {
    //genereate random 7xxxx number
    randomValue = rand() % 10000 + 70000;

    //Check if number is already in tree
    Faculty newFaculty(randomValue);

    if(facultyTree.SearchNode(newFaculty))
    {
      valid = false;
    }
    else
    {
      valid = true;
    }

    valid = true;


  } while(!valid);

  return randomValue;
}

void SchoolDatabase :: SerializeStudents()
{
  ofstream oFile;

  oFile.open("studentTable");

  studentTree.SerializeGenBST(oFile);

  oFile.close();
}
void SchoolDatabase :: SerializeFaculty()
{
  ofstream oFile;

  oFile.open("facultyTable");

  facultyTree.SerializeGenBST(oFile);

  oFile.close();
}

void SchoolDatabase :: DeserializeStudents()
{

}
void SchoolDatabase :: DeserializeFaculty()
{

}
