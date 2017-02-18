//bubble sort
#include <iostream>
using namespace std;

int main(){
	int n = 5, ctr = 1;
	int array[] = {35, 10, 55, 20, 5};
	
	cout << "Original Array: ";
	for(int x = 0; x < n; x++)
		cout << array[x] << " ";
	cout << endl << endl;
	
	for(int i = n; i > 1; i--){
		for(int j = 0; j<i-1; j++)
			if(array[j] > array[j+1]){
				int swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		cout << endl;
		cout << "Pass " << ctr++ << ": ";
		for(int k = 0; k < 5; k++)
			cout << array[k] << " ";

		for(int j = 0; j<i-1; j++)
			cout << " -> Swap " << "(" << array[j+1] << ", " << array[j] << ")";
		cout << endl;
	}
	
	return 0;
}
