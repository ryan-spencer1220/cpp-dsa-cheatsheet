#include <iostream>

using namespace std;

class Stack
{
public:
  Stack();
  ~Stack();
  void push(int);
  int pop();
  int peek();
  bool isEmpty();
  int size();

private:
  int *stack;
  int top;
  int capacity;
  void resize(int);
};