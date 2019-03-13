void List::BubbleSort(){
  while( current != NULL){
    temp = current - > next;
    while(temp!= NULL){
      if(current -> data < temp - data){
        std::swap(current -> data , temp -> data)
      }
      temp = temp -> next;
    }
    current = current -> next;
  }
}
