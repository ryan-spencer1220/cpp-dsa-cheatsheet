#include "node.h"

Node::Node()
{
  val = 0;
  next = nullptr;
}

Node::Node(int val)
{
  this->val = val;
  next = nullptr;
}

Node::Node(int val, Node *next)
{
  this->val = val;
  this->next = next;
}