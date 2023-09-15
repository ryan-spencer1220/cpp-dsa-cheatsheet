#include "singleLL/singleLL.h"

#include <iostream>
using namespace std;

int main()
{
  SinglyLinkedList newList;
  newList.append(20);
  newList.append(14);
  newList.append(2);
  newList.append(12);

  newList.print();

  return 0;
}