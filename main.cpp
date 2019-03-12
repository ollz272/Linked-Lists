#include <cstdlib>
#include "LinkedList.h"
#include "LinkedList.cpp"


int main(){

  List Numbers;


  for(int i = 1; i <= 100; i++){
    Numbers.AddNode(i);
  }


  Numbers.PrintList();

  Numbers.Reverser();

  Numbers.PrintList();

}
