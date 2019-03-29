void List::BubbleSort(){
  //Starts the sorting algorithm at the head of the linked list.
  current = head;

  while( current != NULL){
    //Move the temp pointer next to the node who's data we want to compare other nodes with.
    temp = current -> next;
    while( temp != NULL){
      //We perform a basic swap of the data if the node which temp is pointing to is larger to that of currentsw, no messing with pointers!
      if(current -> data < temp -> data){
        std::swap(current -> data , temp -> data)
      }
      //compare the next node along
      temp = temp -> next;
    }
    //move current to the next node and repeat the process until sorted.
    current = current -> next;
  }

}
