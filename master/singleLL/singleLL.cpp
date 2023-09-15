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
  while (head)
  {
    head = head->next;
    delete curr;
    curr = head;
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

void SinglyLinkedList::append(Node *head, int val)
{
  if (!head)
  {
    head = new Node(val);
    return;
  }

  if (!head->next)
  {
    head->next = new Node(val);
    return;
  }

  append(head->next, val);
}

void SinglyLinkedList::print()
{
  Node *curr = head;
  print(curr);
}

void SinglyLinkedList::print(Node *head)
{
  if (!head)
    return;

  cout << head->val << " ";
  print(head->next);
}

void SinglyLinkedList::remove(int val)
{
  remove(head, val);
}

void SinglyLinkedList::remove(Node *head, int val)
{
  if (!head)
    return;

  if (head->val == val)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  remove(head->next, val);
}

void SinglyLinkedList::insert(int index, int val)
{
  insert(head, index, val, 0);
}

void SinglyLinkedList::insert(Node *head, int index, int val, int count)
{
  if (!head)
    head = new Node(val);

  if (count == index - 2)
  {
    Node *temp = head->next;
    head->next = new Node(val);
    head->next->next = temp;
    return;
  }

  insert(head->next, index, val, count + 1);
}

void SinglyLinkedList::reverse()
{
  reverse(head, nullptr, nullptr);
}

void SinglyLinkedList::reverse(Node *head, Node *prev, Node *next)
{
  if (!head)
  {
    this->head = prev;
    return;
  }

  next = head->next;
  head->next = prev;
  prev = head;
  head = next;

  reverse(head, prev, next);
}

Node *SinglyLinkedList::findMiddleNode()
{
  return findMiddleNode(head, head);
}

Node *SinglyLinkedList::findMiddleNode(Node *slow, Node *fast)
{
  if (!fast || !fast->next)
    return slow;

  return findMiddleNode(slow->next, fast->next->next);
}

bool SinglyLinkedList::hasLoop()
{
  return hasLoop(head, head);
}

bool SinglyLinkedList::hasLoop(Node *slow, Node *fast)
{
  if (!fast || !fast->next)
    return false;

  if (slow == fast)
    return true;

  return hasLoop(slow->next, fast->next->next);
}

void SinglyLinkedList::removeDuplicates()
{
  Node *curr = head;
  while (curr)
  {
    Node *temp = curr;
    while (temp && temp->next)
    {
      if (curr->val == temp->next->val)
      {
        Node *duplicate = temp->next;
        temp->next = temp->next->next;
        delete duplicate;
      }
      else
      {
        temp = temp->next;
      }
    }
    curr = curr->next;
  }
}