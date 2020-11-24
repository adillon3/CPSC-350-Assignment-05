/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef TREENODE_H_
 #define TREENODE_H_

 #include <iostream>
 using namespace std;

 #include <string>
 #include <fstream>


class TreeNode
{
  public:
    TreeNode(int newKey)
    {
      left  = nullptr;
      right = nullptr;
      key   = newKey;
    }
    ~TreeNode()
    {
      delete left;
      delete right;
      left  = nullptr;
      right = nullptr;
    }


    int key; //data as well as key
    TreeNode *left;
    TreeNode *right;
  private:

};

 #endif // TREENODE_H_
