/*A. Shooshuns and Sequence*/

#include <iostream>

using namespace std;

int main(){

	int numeros, pos, aux, num;
	bool cumple = true;

	cin >> numeros >> pos;

	int arr[numeros];
	pos--;

	for (int i = 0; i < numeros; ++i){
		
		cin >> arr[i];

		if(i == pos)
			num = arr[i];

		if(i > pos){
			if( arr[i] != num)
				cumple = false;
		}
	}

	aux = pos;

	for (int i = pos - 1; i >= 0 ; --i)
	{
		if(arr[i] != num){
			aux =  i + 1;
			break;
		}
		if(i == 0 and arr[0] == num)
			aux = 0;
	}

	if(cumple)
		cout << aux <<'\n';
	else
		cout << "-1\n";

	return 0;
}