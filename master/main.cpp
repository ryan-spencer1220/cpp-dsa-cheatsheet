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

  cout << "Original list: ";
  newList.print();

  return 0;
}