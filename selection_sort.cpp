//selection sort
#include <iostream>
using namespace std;

int main(){
	int n = 5, ctr = 1;
	int array[] = {30, 40, 20, 50, 10};
	
	cout << "Array at beginning: ";
	for(int x = 0; x < n; x++)
		cout << array[x] << " ";
	cout << endl << endl;
	for(int i = 0; i < n-1; i++){
		int min = array[i], index = i;
		for(int j = i+1; j < n; j++){
			if(array[j] < min){
				min = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = min;
		cout << endl;
		cout << "Pass " << ctr++ << ": ";
		for(int k = 0; k < 5; k++)
			cout << array[k] << " ";
		cout << " - ";
		for(int j = i+1; j<n; j++)
			cout << " Swapped " << "(" << array[j] << ", " << array[j-1] << ")";
		cout << endl;
	}
	
	
	return 0;
}
