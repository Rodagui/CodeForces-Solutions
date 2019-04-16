/*A. Xenia and Divisors*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int elements;
	int pos;
	
	cin>>elements;

	vector <int> arr(8);
	vector <int> aux(3);

	for (int i = 0; i < elements; ++i){
		cin>>pos;
		arr[pos]++;
	}

	if(arr[2] >= arr[4] and arr[1] >= arr[4]){
		
		aux[0] = arr[4];

		arr[2] -= arr[4];
		arr[1] -= arr[4];
		arr[4] = 0;
	}

	if(arr[1] >= arr[2] and arr[6] >= arr[2]){

		aux[1] = arr[2];

		arr[1] -= arr[2];
		arr[6] -= arr[2];
		arr[2] = 0;
	}

	if(arr[1] >= arr[3] and arr[6] >= arr[3]){

		aux[2] = arr[3];

		arr[1] -= arr[3];
		arr[6] -= arr[3];
		arr[3] = 0;
	}

	int cant = 0;

	if(count(arr.begin(), arr.end(), 0) == 8){
		cant = aux[0];
		for (int i = 0; i < cant; ++i){
			cout<<"1 2 4\n";
		}

		cant = aux[1];
		for (int i = 0; i < cant; ++i){
			cout<<"1 2 6\n";
		}

		cant = aux[2];
		for (int i = 0; i < cant; ++i){
			cout<<"1 3 6\n";
		}

	}
	else{
		cout<<"-1\n";
	}
		


	return 0;	
}