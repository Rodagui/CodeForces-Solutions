/*B. Kuriyama Mirai's Stones*/

#include <bits/stdc++.h>

using namespace std;
using LL = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;
	int queries;
	int caso;
	int l, r;


	cin >> tam;

	vector <LL> arr(tam);
	vector <LL> acum1(tam);
	vector <LL> acum2(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin>> arr[i];

		if(i == 0)
			acum1[i] = arr[i];
		else
			acum1[i] = arr[i] + acum1[i - 1];
	}

	vector <LL> copia(arr);
	sort(copia.begin(), copia.end());

	for (int i = tam - 1; i >= 0; --i)
	{
		if(i == tam - 1)
			acum2[i] = copia[i];
		else
			acum2[i] = copia[i] + acum2[i+1];
	}

	cin >> queries;

	while(queries--){
		
		cin >> caso >> l >> r;

		r--;
		l--;

		if(caso == 1){

			if( l-1 < 0)
				cout << acum1[r]<< '\n';
			else
				cout << acum1[r] - acum1[l - 1] << '\n';
		}
		else{

			if(r + 1 > tam - 1)
				cout << acum2[l]<<'\n';
			else
				cout << acum2[l] - acum2[r + 1] << '\n';
		}
	}

	return 0;
}