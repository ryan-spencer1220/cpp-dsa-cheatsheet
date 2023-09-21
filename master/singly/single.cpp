#include "single.h"

SinglyLinkedList::SinglyLinkedList()
{
  head = nullptr;
  tail = nullptr;
  length = 0;
}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList &linkedList)
{
  head = nullptr;
  tail = nullptr;

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
  if (!head)
  {
    head = new Node(val);
    tail = head;
    length++;
    return;
  }
  Node *newNode = new Node(val);
  Node *temp = head;
  head = newNode;
  head->next = temp;
  length++;
}

void SinglyLinkedList::append(int val)
{
  append(head, val);
  length++;
}

void SinglyLinkedList::append(Node *head, int val)
{
  if (!head)
  {
    head = new Node(val);
    tail = head;
    return;
  }
  if (!head->next)
  {
    head->next = new Node(val);
    tail = head->next;
    return;
  }
  append(head->next, val);
}

void SinglyLinkedList::removeFirst()
{
  if (!head)
    return;

  Node *temp = head;
  head = head->next;
  delete temp;
  length--;
}

void SinglyLinkedList::removeLast()
{
  if (!head)
    return;

  removeLast(head);
  length--;
}

void SinglyLinkedList::removeLast(Node *head)
{
  if (!head)
    return;

  if (!head->next)
  {
    delete head;
    head = nullptr;
    return;
  }

  if (!head->next->next)
  {
    delete head->next;
    head->next = nullptr;
    return;
  }

  removeLast(head->next);
}

void SinglyLinkedList::remove(int val)
{
  remove(head, val);
  length--;
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
  length++;
}

void SinglyLinkedList::insert(Node *head, int index, int val, int count)
{
  if (!head)
  {
    head = new Node(val);
    tail = head;
  }
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

Node *SinglyLinkedList::findKthNodeFromEnd(int k)
{
  Node *fast = head;

  for (int i = 0; i < k; i++)
  {
    if (!fast)
      return nullptr;
    fast = fast->next;
  }

  return findKthNodeFromEnd(head, fast);
}

Node *SinglyLinkedList::findKthNodeFromEnd(Node *slow, Node *fast)
{
  if (!fast)
    return slow;
  findKthNodeFromEnd(slow->next, fast->next);
}

void SinglyLinkedList::removeDuplicates()
{
  Node *current = head;
  while (current)
  {
    Node *runner = current;
    while (runner->next)
    {
      if (runner->next->val == current->val)
      {
        Node *temp = runner->next;
        runner->next = runner->next->next;
        delete temp;
        length -= 1;
      }
      else
      {
        runner = runner->next;
      }
    }
    current = current->next;
  }
}

int SinglyLinkedList::binaryToDecimal()
{
  return binaryToDecimal(head, 0);
}

int SinglyLinkedList::binaryToDecimal(Node *curr, int num)
{
  if (!curr)
  {
    return num;
  }
  binaryToDecimal(curr, num * 2 + curr->val);
}

void SinglyLinkedList::reverseBetween(int m, int n)
{
  if (!head)
    return;

  Node *dummy = new Node(0);
  dummy->next = head;
  Node *prev = dummy;

  for (int i = 0; i < m; i++)
  {
    prev = prev->next;
  }

  Node *current = prev->next;

  for (int j = 0; j < n - m; j++)
  {
    Node *temp = current->next;
    current->next = temp->next;
    temp->next = prev->next;
    prev->next = temp;
  }
  head = dummy->next;
  delete dummy;
}

void SinglyLinkedList::removeAllButFirstAndLast()
{
  if (head == nullptr || head->next == nullptr)
  {
    return;
  }

  removeAllButFirstAndLast(head);
}

void SinglyLinkedList::removeAllButFirstAndLast(Node *curr)
{
  if (curr->next != nullptr && curr->next->next != nullptr)
  {
    Node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    length--;
    removeAllButFirstAndLast(curr);
  }
}

void SinglyLinkedList::removeLastTwoNodes()
{
  removeLastTwoNodes(head, 0);
}

void SinglyLinkedList::removeLastTwoNodes(Node *curr, int count)
{
  if (!curr || count == 2)
  {
    return;
  }
  if (!curr->next->next)
  {
    cout << "deleting last node" << endl;
    Node *temp = curr->next;
    curr->next = nullptr;
    delete temp;
    length--;
  }
  removeLastTwoNodes(curr->next, count++);
}

bool SinglyLinkedList::addNodeIfUnique(int val)
{
  return addNodeIfUnique(head->next, val);
}

bool SinglyLinkedList::addNodeIfUnique(Node *curr, int val)
{
  if (curr == nullptr)
  {
    curr = new Node(val);
    tail = curr;
    return true;
  }

  if (curr->val == val)
  {
    return false;
  }

  if (curr->next == nullptr)
  {
    curr->next = new Node(val);
    tail = curr->next;
    return true;
  }

  return addNodeIfUnique(curr->next, val);
}

void SinglyLinkedList::swapLastNodeAndFirstNode()
{
  Node *curr = head;
  Node *prev = nullptr;
  Node *secondToLast = nullptr;
  swapLastNodeAndFirstNode(curr, prev, secondToLast);
}

void SinglyLinkedList::swapLastNodeAndFirstNode(Node *&curr, Node *&prev, Node *&secondToLast)
{
  if (head == nullptr || head->next == nullptr)
  {
    return;
  }

  if (!curr->next)
  {
    // assuming the linked list contains two or more nodes, the following should be true:
    // curr = last node
    // prev = second-to-last node
    // secondToLast = third-to-last node.

    if (secondToLast)
    {
      // More than two nodes in the list, perform the swap.
      curr->next = head->next;
      head->next = nullptr;
      prev->next = head;
      head = curr;
      return;
    }
    else
    {
      // Only two nodes in the list, simply swap them.
      curr->next = head;
      head = curr;
      prev->next = nullptr;
      return;
    }
  }
  secondToLast = prev;
  prev = curr;
  curr = curr->next;
  swapLastNodeAndFirstNode(curr, prev, secondToLast);
}

Node *SinglyLinkedList::copyList()
{
  Node *newHead = nullptr;
  return copyList(head, newHead);
}

Node *SinglyLinkedList::copyList(Node *head, Node *&newHead)
{
  if (!head)
    return nullptr;

  newHead = new Node(head->val);
  newHead->next = copyList(head->next, newHead->next);
  return newHead;
}

// Helper functions

void SinglyLinkedList::print()
{
  print(head);
}

void SinglyLinkedList::print(Node *head)
{
  if (!head)
    return;

  cout << head->val << " ";
  print(head->next);
}

int SinglyLinkedList::getLength()
{
  return length;
}