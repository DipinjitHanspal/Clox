#include "node.h";
class dll
{
public:
  void add(char *str);
  int find(char *str);

private:
  node head;
  node tail;
}