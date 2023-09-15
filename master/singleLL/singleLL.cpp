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

void SinglyLinkedList::prepend(int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  head = newNode;
  head->next = temp;
}

void SinglyLinkedList::append(int val)
{
  append(head, val);
}

void SinglyLinkedList::append(Node *root, int val)
{
  if (!root)
  {
    head = new Node(val);
    return;
  }

  if (!root->next)
  {
    root->next = new Node(val);
    return;
  }

  append(root->next, val);
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