/*B. Permutation*/
#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam, aux;
	int cambios = 0;

	cin >> tam;

	vector <int> nums(tam);

	for (int i = 0; i < tam; ++i){
		cin >> aux;

		if(aux > tam)
			cambios++;
		else{

			if(nums[aux - 1] >= 1)
				cambios++;
			else
				nums[aux - 1]++;
		}
		
	}

	cout << cambios;

	return 0;
}