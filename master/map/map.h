#include <iostream>

using namespace std;

class HashMap
{
private:
  struct Node
  {
    int key;
    int value;
    Node *next;
  };
  Node **table;
  int capacity;
  int hash(int key);

public:
  HashMap();
  ~HashMap();
  void insert(int key, int value);
  int get(int key);
  void remove(int key);
};