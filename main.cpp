/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #include "Assign5.h"

 int main()
 {
   cout << "Hello" << endl << endl;

   cout << "creating BST\n";
   BST<int> myBST;

   cout << "INSERTING: 5\n";
   myBST.InsertNode(5);
      cout << "INSERTING: 1\n";
   myBST.InsertNode(1);
      cout << "INSERTING: 10\n";
   myBST.InsertNode(10);
      cout << "INSERTING: 4\n";
   myBST.InsertNode(4);
      cout << "INSERTING: 6\n";
   myBST.InsertNode(6);


   cout << "INORDER\n\n";
   myBST.InOrder();

   cout << "END\n\n";
   return 0;
 }
