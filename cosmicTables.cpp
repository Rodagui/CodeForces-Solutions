/*B. Cosmic Tables*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int largo, ancho, consultas;
	int y, x;
	char q;

	cin >> largo >> ancho >> consultas;

	int mat[largo][ancho];

	vector <int> col(ancho);
	vector <int> fila(largo);

	for (int i = 0; i < ancho; ++i)
		col[i] = i;

	for (int i = 0; i < largo; ++i)
		fila[i] = i;
	

	for (int i = 0; i < largo; ++i)
	{
		for (int j = 0; j < ancho; ++j)
		{
			cin >> mat[i][j];
		}

	}


	for (int i = 0; i < consultas; ++i)
	{
		cin >> q >> x >> y;

		x--;
		y--;

		if(q == 'c'){
			swap(col[x], col[y]);
		}
		else if(q == 'r'){
			swap(fila[x], fila[y]);
		}
		else{
			x = fila[x];
			y = col[y];

			cout << mat[x][y] << '\n';
		}
		
	}
	return 0;
}