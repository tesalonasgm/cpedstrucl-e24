#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *back;
};

node *n, *top = NULL, *bottom = NULL;

int push(int num){
	n = new node;
	n -> data = num;
	n -> next = NULL;
	
	if(top == NULL && bottom == NULL){
		n -> back = NULL;
		top = bottom = n;
	} else{
		bottom -> next = n;
		n -> back = bottom;
		bottom = n;
	}
}

int pop(){
	if(top == NULL && bottom == NULL){
		return 0;
	} else{
		int data;
		if(bottom -> back != NULL){
			n = bottom;
			bottom = bottom -> back;
			bottom -> next = NULL;
			data = n -> data;
			delete n;
		} else {
			data = top -> data;
			delete top, bottom, n;
			top = bottom = NULL;
		}
		cout << data << " has beensuccessfully popped" << endl;
		return 1;
	}
}

void display(){
	n = top;
	if(n == NULL)
		cout << "Stack is empty!" << endl;
	else{
		while(n != NULL){
			cout << n -> data << " ";
			n = n -> next;
		}
	}
}

int menu(){
	cout << "What would you like to do?" << endl;
	cout << "[1] Push" << endl;
	cout << "[2] Pop" << endl;
	cout << "[3] Display" << endl;
	cout << "[4] Exit" << endl;
}

int main(){
	int choice;
	int num;
	struct node *n;
	do{
		menu();
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Enter number: ";
				cin >> num;
				push(num);
				break;
			case 2:
				if(!pop())
				cout << "Stack is Emptyyyyyyyyyyy" << endl;
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
		}
	}while(1);
	
	return 0;
}
