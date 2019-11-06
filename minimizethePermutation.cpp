/*B. Minimize the Permutation*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int casos;
 
	cin >> casos;
 
	while(casos--){
 
		bool canChange = true;
		int tam;
		int ini;
 
		cin >> tam;
 
		ini = tam - 2;
		vector <int> nums(tam);
		vector <int> cambio(tam);
		map <int, int> posiciones;
 
		for (int i = 0; i < tam; ++i){
			cin >> nums[i];
			posiciones[nums[i]] = i;
		}
 
		int pos;
 
		for (int i = 1; i < tam; ++i)
		{
			pos = posiciones[i];
			for (int j = pos; j > 0 ; --j)
			{
				if(cambio[j - 1] == 1)
					break;
 
				if(nums[j - 1] > nums[j] and cambio[j - 1] == 0){
					swap(nums[j - 1], nums[j]);
					cambio[j - 1] = 1;
				}
 
			}
		}
 
		for (int i = 0; i < tam; ++i)
		{
			cout << nums[i] << ' ';
		}
 
		cout << '\n';
	}
 
 
	return 0;
}