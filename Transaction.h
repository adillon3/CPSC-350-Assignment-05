/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef TRANSACTION_H_
 #define TRANSACTION_H_

 #include "Student.h"
 #include "Faculty.h"

enum TransactionType
{
  REMOVAL,
  ADDITION,
  MODIFICATION
};

class Transaction
{
public:
  Transaction();
  Transaction(Person* newPerson, TransactionType newType);
  ~Transaction();



private:
  TransactionType type;
  Person* person;
};

 #endif /* TRANSACTION_H_ */
