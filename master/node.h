class Node
{
public:
  int val;
  Node *next;

  Node();
  Node(int val);
  ~Node();

  Node(Node *node);
  void operator=(const Node &node);
};