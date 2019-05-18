/*A. Petr and Book*/

#include <iostream>

using namespace std;

int main(){
	
	int pages;
	int arr[7];
	int tot = 0;
	int aux = 0;

	cin >> pages;

	for (int i = 0; i < 7; ++i){
		cin >> arr[i];
		tot += arr[i];
	}


	int auxtot = 0;

	if(pages > tot){
		
		aux = pages % tot;

		if( aux == 0){
			auxtot = pages - tot;	
			aux = pages;
		}
	}
	else{
		aux = pages;
	}


	for (int i = 0; i < 7; ++i){
		
		auxtot += arr[i];

		if(auxtot >= aux){
			cout << i+1 <<'\n';
			break;
		}
	}

	return 0;
}