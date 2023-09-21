#include "double.h"

DoublyLinkedList::DoublyLinkedList()
{
  head = nullptr;
  tail = nullptr;
  length = 0;
}

DoublyLinkedList::DoublyLinkedList(int data)
{
  head = new Node(data);
  tail = head;
  length = 1;
}

DoublyLinkedList::~DoublyLinkedList()
{
  Node *temp = head;
  while (head != nullptr)
  {
    head = head->next;
    delete temp;
    temp = head;
  }
}

void DoublyLinkedList::append(int value)
{
  Node *newNode = new Node(value);
  if (!head)
  {
    head = newNode;
    tail = newNode;
    length = 1;
  }
  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    length++;
  }
}

void DoublyLinkedList::prepend(int value)
{
  Node *newNode = new Node(value);
  if (!head)
  {
    head = newNode;
    tail = newNode;
    length = 1;
  }
  else
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    length++;
  }
}

void DoublyLinkedList::deleteFirst()
{
  if (!head || !head->next)
  {
    head = nullptr;
    tail = nullptr;
    length = 0;
  }
  else
  {
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
    length--;
  }
}

void DoublyLinkedList::deleteLast()
{
  if (!head)
  {
    return;
  }
  else if (!head->next)
  {
    head = nullptr;
    tail = nullptr;
    length--;
    return;
  }
  else
  {
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
    length--;
  }
}

bool DoublyLinkedList::insert(int index, int value)
{
  if (index < 0 || index > length)
    return false;

  if (index == 0)
  {
    prepend(value);
    return true;
  }

  if (index == length)
  {
    append(value);
    return true;
  }

  Node *newNode = new Node(value);
  if (!head)
  {
    head = newNode;
    tail = newNode;
    length++;
    return true;
  }
  Node *before = get(index - 1);
  Node *curr = before->next;

  newNode->prev = before;
  newNode->next = curr;

  before->next = newNode;
  curr->prev = newNode;

  length++;
  return true;
}

void DoublyLinkedList::remove(int index)
{
  if (index < 0 || index >= length)
    return;

  if (index == 0)
  {
    deleteFirst();
    return;
  }

  if (index == length - 1)
  {
    deleteLast();
    return;
  }

  Node *before = get(index - 1);
  Node *curr = before->next;
  Node *after = curr->next;

  before->next = after;
  after->prev = before;

  delete curr;
  length--;
}

// helper functions

Node *DoublyLinkedList::get(int index)
{
  if (index < 0 || index >= length)
    return nullptr;
  Node *temp = head;
  for (int i = 0; i < index; i++)
  {
    temp = temp->next;
  }
  return temp;
}

bool DoublyLinkedList::set(int index, int value)
{
  Node *temp = get(index);
  if (temp)
  {
    temp->val = value;
    return true;
  }
  return false;
}

void DoublyLinkedList::print()
{
  print(head);
}

void DoublyLinkedList::print(Node *head)
{
  if (!head)
    return;

  cout << head->val << " ";
  print(head->next);
}

int DoublyLinkedList::size()
{
  return length;
}

bool DoublyLinkedList::isEmpty()
{
  return length == 0;
}