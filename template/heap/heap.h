#include <iostream>

using namespace std;

class Heap
{
public:
  Heap(int capacity);
  ~Heap();
  void insert(int value);
  int remove();
  void print();
  int size();
  bool isEmpty();

private:
  int *heap;
  int capacity;
  int length;
  void resize(int);
  void heapifyUp();
  void heapifyDown();
  int parent(int);
  int leftChild(int);
  int rightChild(int);
  bool hasParent(int);
  bool hasLeftChild(int);
  bool hasRightChild(int);
  void swap(int, int);
  void print(int, int);
};