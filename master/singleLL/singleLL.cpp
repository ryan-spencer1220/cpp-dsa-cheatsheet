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
    append(curr->val);
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

void SinglyLinkedList::append(int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  head = newNode;
  head->next = temp;
}

void SinglyLinkedList::print()
{
  Node *curr = head;
  print(curr);
}

void SinglyLinkedList::print(Node *root)
{
  if (!root)
    return;

  cout << root->val << " ";
  print(root->next);
}