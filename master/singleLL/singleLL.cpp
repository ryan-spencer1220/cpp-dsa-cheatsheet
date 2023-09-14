#include "singleLL.h"

SinglyLinkedList::SinglyLinkedList()
{
  head = nullptr;
  length = 0;
}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList &linkedList)
{
  head = nullptr;

  Node *curr = linkedList.head;
  while (curr)
  {
    insert(curr->data);
    curr = curr->next;
  }
}

SinglyLinkedList::~SinglyLinkedList()
{
  Node *curr = head;
  while (curr)
  {
    Node *temp = curr;
    curr = curr->next;
    delete temp;
  }
}