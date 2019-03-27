#include <cstdlib>
#include "LinkedList.h"
#include "LinkedList.cpp"


int main(){

  List Numbers;


  Numbers.AddNode(12);
  Numbers.AddNode(13);
  Numbers.AddNode(14);


  Numbers.PrintList();

  Numbers.Reverser();

  Numbers.PrintList();

}
