class node
{
  public:
    node next();
    node prev();

  private:
    char **val;
    node *next;
    node *prev;
}