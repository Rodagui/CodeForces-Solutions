/*B. Valera and Fruits*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> fruits(3005);
	int maximo;
	int trees;
	int aux = 0;
	int pos, f;
	int tot = 0;

	cin >> trees >> maximo;

	for (int i = 0; i < trees; ++i){
		cin >> pos >> f;
		fruits[pos + 1] += f;
	}

	for (int i = 1; i < 3002; ++i)
	{
		aux = maximo - fruits[i];
		
		if(aux > 0){

			if(fruits[i + 1] >= aux){
				fruits[i] += aux;
				fruits[i + 1] -= aux; 
			}
			else{
				fruits[i] += fruits[i+1];
				fruits[i+1] = 0;
			}

		}

		if(fruits[i] < maximo)
			tot += fruits[i];
		else
			tot += maximo;
		
	}

	cout << tot ;



	return 0;
}