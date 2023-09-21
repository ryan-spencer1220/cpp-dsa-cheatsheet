class CircularLinkedList
{
private:
  struct Node
  {
    int data;
    Node *next;
    Node *prev;
  };
  Node *head;
  Node *tail;
  int length;

public:
  CircularLinkedList();
  ~CircularLinkedList();

  // add & remove functions
  void append(int);
  void prepend(int);
  void insert(int, int);
  void remove(int);

  // C++ DSA LL: Interview Functions
  void swapFirstAndLast();
  void reverse();
  bool palindromeChecker();
  void swapNodesInPairs();

  // PSU Proficiency Exam Practice Questions
  void removeAllButFirstAndLast();
  void removeAllButFirstAndLast(Node *);
  void removeLastTwoNodes();
  void removeLastTwoNodes(Node *);
  bool addNodeIfUnique(int);
  bool addNodeIfUnique(Node *, int);
  void swapLastNodeAndFirstNode();
  void swapLastNodeAndFirstNode(Node *&, Node *&, Node *&);
  void copyList();
  void copyList(Node *&, Node *&);

  // Helper functions
  void print();
  int size();
  bool isEmpty();
  int indexOf(int);
};