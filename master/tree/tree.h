#include <iostream>

using namespace std;

class Tree
{
public:
  Tree();
  ~Tree();
  void insert(int key);
  void remove(int key);
  void print();

private:
  struct Node
  {
    int key;
    Node *left;
    Node *right;
  };
  Node *root;
  void insert(Node *&, int);
  void remove(Node *&, int);
  void print(Node *);
};