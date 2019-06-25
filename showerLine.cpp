/*B. Shower Line*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int matriz[5][5];
	int aux[5][5];

	vector <int> nums(5);

	int valor = 0;
	int maximo = 0;
	int uno = 0, dos = 1, tres = 2, cuatro = 3, cinco = 4;

	for (int i = 0; i < 5; ++i)
		nums[i] = i;
	

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			aux[i][j] = 0;
			
		}
	}


	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			cin >> matriz[i][j];
			aux[i][j]+= matriz[i][j];
			aux[j][i]+= matriz[i][j];
		}
	}


	maximo += aux[uno][dos] + aux[tres][cuatro] + aux[dos][tres];
	maximo += aux[cuatro][cinco] + aux[tres][cuatro] + aux[cuatro][cinco];

	while(next_permutation(nums.begin(), nums.end())){

		uno = nums[0];
		dos = nums[1];
		tres = nums[2];
		cuatro = nums[3];
		cinco = nums[4];
		valor = aux[uno][dos] + aux[tres][cuatro] + aux[dos][tres];
		valor += aux[cuatro][cinco] + aux[tres][cuatro] + aux[cuatro][cinco];

		if(valor > maximo)
			maximo = valor;

	}

	cout << maximo<< '\n';

	

	return 0;
}