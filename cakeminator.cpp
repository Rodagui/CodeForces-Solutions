/*A. Cakeminator*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int row, col;
	int tot = 0;
	
	cin >> row >> col;
	
	char caracter;
	int arr[row][col];
	
	set <int> filas;
	set <int> columnas;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = 0;
			cin >> caracter;
			
			if (caracter == 'S')
			{
				columnas.insert(j);
				filas.insert(i);
			}
		}
	}

	for (int i = 0; i < col; ++i)
	{
		if(columnas.count(i) == 0){
			for (int j = 0; j < row; ++j)
			{
				arr[j][i] = 1;
			}
		}
	}

	for (int i = 0; i < row; ++i)
	{
		if(filas.count(i) == 0){
			for (int j = 0; j < col ; ++j)
			{
				arr[i][j] = 1; 	
			}
		}
	}


	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if( arr[i][j] == 1)
				tot++;
		}
	}

	cout << tot;

	return 0;
}