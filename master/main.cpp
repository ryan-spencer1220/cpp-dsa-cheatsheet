#include "singleLL/singleLL.h"

#include <iostream>
using namespace std;

int main()
{
  SinglyLinkedList newList;
  newList.prepend(5);
  newList.prepend(10);
  newList.prepend(15);
  newList.append(20);
  newList.append(14);
  newList.append(2);
  newList.append(12);

  newList.insert(3, 100000);

  cout << "Original list: ";
  newList.print();

  cout << endl;

  cout << "Reverse list: ";
  newList.reverse();
  newList.print();

  cout << endl
       << "Find middle node: ";
  Node *middleNode = newList.findMiddleNode();
  cout << middleNode->val << endl;

  cout << "Has loop: ";
  string loopFlag = (newList.hasLoop() == 1) ? "true" : "false";
  cout << loopFlag << endl;

  return 0;
}