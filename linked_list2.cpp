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
    
    int displayValue(){
    	Node *temp = head;
    	while(temp != NULL){
    		cout << temp->x;
    		if(temp->next != NULL)
    			cout << endl;
    		temp = temp->next;
		}
	}

private:
    Node *head; 
};


int menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Insert into linked list \n";
	cout << "2: Pop \n";
	cout << "3: Exit \n";
	cout << "4. Display contents of the Linked List" << endl;
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
				cout << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "added" << endl;
				list.addValue(num);
				system("pause>0");
				break;
			case 2:
				cout << list.popValue() << endl;
				break;
			case 4:
				cout << endl;
				list.displayValue();
				system("pause>0");
				break;
			case 3:
				exit(1);
		}
	}while(1);


    return 0;
}
