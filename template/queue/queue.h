#include <iostream>

using namespace std;

class Queue
{
public:
  Queue();
  ~Queue();
  void enqueue(int);
  int dequeue();
  int peek();
  bool isEmpty();
  int size();

private:
  int *queue;
  int front;
  int back;
  int capacity;
};