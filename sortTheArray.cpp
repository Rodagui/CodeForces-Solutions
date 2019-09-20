/*B. Sort the Array*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;

	cin >> tam;

	vector <long long> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];

	vector <long long> copia(tam);

	copia = arr;

	sort(copia.begin(), copia.end()); /*ARREGLO ORDENADO*/

	int limIzq = 1, limDer = tam;

	if(copia == arr){
		cout << "yes\n";
		cout << "1 1\n";
	}
	else{

		
		int i;

		for (i = 0; i < tam - 1 ; ++i)
		{
			if( arr[i] > arr[i + 1] ){
				limIzq = i;
				break;
			}
		}

		for (i = tam - 1; i > 0; --i)
		{
			if( arr[i] < arr[i - 1]){
				limDer = i ;
				break;
			}
		}

		vector <long long> aux(tam);

		for ( i = 0; i < limIzq; ++i)
			aux[i] = arr[i];

		i = limIzq;

		for (int j = limDer; j >= limIzq ; --j)
		{
			aux[i] = arr[j];
			i++;
		}

		for (i = limDer + 1; i < tam ; ++i)
			aux[i] = arr[i];

		if(aux == copia){
			cout << "yes\n";
			cout << limIzq + 1 << ' ' << limDer + 1<< '\n';
		}
		else
			cout << "no\n";
		
	}
	

	return 0;
}