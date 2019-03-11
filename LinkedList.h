
class List{
	private: //data
		
		typedef struct node{
			int data; //Creates data stored within the node
			node* next; //this is a pointer to the next node within the list.
		}* nodePtr; //nodePtr now means node*.
		
		nodePtr head;
		nodePtr current;
		nodePtr temp;
		notePtr tail;
		
	public: //functions to manipulate data
		list(); //constructor
		void AddNode(int addData);
		void DeleteNode(int delData);
		void Reverser();
		void PrintList();
};
