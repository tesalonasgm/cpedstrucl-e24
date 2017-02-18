//selection sort
#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int array[] = {30, 40, 20, 50, 10};
	
	cout << "Original Array: ";
	for(int x = 0; x < n; x++)
		cout << array[x] << " ";
	cout << endl << endl;
	for(int i = 0; i < n-1; i++){
		int min = array[i], index = i;
		for(int j = i+1; j < n; j++){
			if(array[j] < min){
				min = array[j];
				index = j;
				cout << "-- " << array[j-1] << " swapped with " << array[j] << endl;
			}
		}
		array[index] = array[i];
		array[i] = min;
		for(int k = 0; k < 5; k++)
			cout << array[k] << " ";
		cout << endl;
	}
	
	return 0;
}
