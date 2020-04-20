/*E. Kefa and First Steps*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;

	vector <int> arr(tam);
	int maxLong = 1;
	int aux = 1;

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
		
		if(i > 0){
			if (arr[i] >= arr[i - 1])
			{
				aux++;
			}
			else{
				if(aux > maxLong){
					maxLong = aux;
				}
				aux = 1;
			}
		}
	}

	if(aux > maxLong){
		maxLong = aux;
	}


	cout << maxLong;
	return 0;
}