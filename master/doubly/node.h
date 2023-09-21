#include <iostream>

using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node *prev;

  Node();
  Node(int val);
  Node(int val, Node *next, Node *prev);

  Node(Node *node);
  void operator=(const Node &node);
};