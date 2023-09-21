#include "singly/single.h"

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
  newList.append(9);
  newList.append(3);
  newList.append(120);
  newList.append(99);
  newList.append(81);
  newList.append(1222);
  newList.append(33);

  // newList.insert(3, 100000);

  cout << "Original list:" << endl;
  newList.print();
  cout << endl
       << "Current Length: " << newList.getLength() << endl;

  // newList.removeLast();
  // cout << "Remove last:" << endl;
  // newList.print();

  // cout << "Reverse list: ";
  // newList.reverse();
  // newList.print();

  // cout << endl;

  // cout << "Reverse list back to original: ";
  // newList.reverse();
  // newList.print();

  // cout << endl
  //      << "Find middle node: ";
  // Node *middleNode = newList.findMiddleNode();
  // cout << middleNode->val << endl;

  // cout << "Has loop: ";
  // string loopFlag = (newList.hasLoop() == 1) ? "true" : "false";
  // cout << loopFlag << endl;

  // cout << "Remove duplicates: ";
  // newList.removeDuplicates();
  // newList.print();

  // cout << endl;

  // cout << "Remove all but first and last: ";
  // newList.removeAllButFirstAndLast();
  // newList.print();

  cout << "Remove last two nodes:" << endl;
  newList.removeLastTwoNodes();
  newList.print();
  cout << endl
       << "New Length: " << newList.getLength() << endl;

  // cout << "Add node if unique: ";
  // string uniqueFlag = (newList.addNodeIfUnique(100000) == 1) ? "true" : "false";
  // cout << "100000 was successfully added? " << uniqueFlag << endl;
  // newList.print();

  // cout << endl;

  // cout << "Add node if unique: ";
  // uniqueFlag = (newList.addNodeIfUnique(19) == 1) ? "true" : "false";
  // cout << "19 was successfully added? " << uniqueFlag << endl;
  // newList.print();

  // cout << "Before swap last node and first node: " << endl;
  // newList.print();
  // cout << endl
  //      << "Swap last node and first node: " << endl;
  // newList.swapLastNodeAndFirstNode();
  // newList.print();

  // cout << endl;
  // Node *copy = newList.copyList();
  // cout << "Copy list: " << endl;
  // newList.print(copy);

  return 0;
}