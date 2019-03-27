
class List{
	private: //data

		typedef struct node{
			int data; //Creates data stored within the node
			node* next; //this is a pointer to the next node within the list.
		}* nodePtr; //nodePtr now means node*.

		nodePtr head;
		nodePtr current;
		nodePtr temp;
		nodePtr forward;
		nodePtr tail;

	public: //functions to manipulate data
		List(); //constructor
		void AddNode(int addData);
		void DeleteNode(int delData);
		void Reverser();
		void InsertNode(int addData, int pos);
		int SizeOfList();
		void PrintList();
		void Reverser();
}; // all okay
