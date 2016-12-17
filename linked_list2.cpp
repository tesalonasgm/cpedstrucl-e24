#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };
    

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node;   
        n->x = val;             
        n->next = head;         
                           
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};


int menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Insert into linked list \n";
	cout << "2: Pop \n";
	cout << "3: Exit \n";
}

int main() {
	LinkedList list;
	int num;
	int choice;
	int count = 0;
	do{
		menu();
		
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Enter number: ";
				cin >> num;
				cout << "added" << endl;
				list.addValue(num);
				count = 1;
				break;
			case 2:
				if(count > 0){
					list.popValue();
					cout << "deleted" << endl;
					count--;
				}
				else
					cout << "No value" << endl;
				break;
			case 3:
				exit(1);
				break;
		}
	}while(1);


    return 0;
}
