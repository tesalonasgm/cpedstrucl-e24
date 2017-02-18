//insertion sort
#include <iostream>
using namespace std;

int main(){
	int n = 5, i = 0, j = 0;
	int array[] = {40, 30, 20, 50, 10};
	
	cout << "Original Array: ";
	for(int x = 0; x < n; x++)
		cout << array[x] << " ";
	cout << endl << endl;
	
	for(i = 1; i < n; i++){
		int temp = array[i];
		for(j = i-1; j>=0 && temp<array[j]; j--){
			array[j+1] = array[j];
		}
		array[j+1] = temp;
		cout << "-- " << array[i] << " swapped with " << array[j+1]<< endl;
		
		for(int k = 0; k < 5; k++)
			cout << array[k] << " ";
		cout << endl;
	}
	
	return 0;
}
