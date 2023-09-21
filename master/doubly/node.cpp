#include "node.h"

Node::Node()
{
  val = 0;
  next = nullptr;
  prev = nullptr;
}

Node::Node(int val)
{
  this->val = val;
  next = nullptr;
  prev = nullptr;
}

Node::Node(int val, Node *next, Node *prev)
{
  this->val = val;
  this->next = next;
  prev = nullptr;
}