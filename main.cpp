#include <cstdlib>
#include "LinkedList.h"
#include "LinkedList.cpp"

int main(){

  List Numbers;

  Numbers.AddNode(1);
  Numbers.AddNode(2);
  Numbers.AddNode(3);
  Numbers.AddNode(7);

  Numbers.PrintList();
  cout << " " << endl;
  Numbers.InsertNode(100, 0);

  Numbers.PrintList();
}
