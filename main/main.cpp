#include <iostream>
#include "list.h"

int main()
{
  TListElem<int>a(5);
  TListElem<int>b(10);
  TList<int> c;

  std::cout << a.GetNext() << std::endl;
  std::cout << a.GetPrev() << std::endl;
  std::cout << a.GetData() << std::endl;

  c.InsFirst(1);
  c.InsLast(0);

  std::cout << c.GetFirst() << ' ' << c.GetLast() << ' ' << c.GetCount() << std::endl;

  TList<int> d(c);

  return 0;
}
