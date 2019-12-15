/*A. Twins*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int suma = 0;
	int aux = 0;
	int ans = 0;
	int mitad;
	int tam;

	cin >> tam;

	vector <int> nums(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> nums[i];
		suma+= nums[i];	
	}

	mitad = suma / 2;

	sort(nums.begin(), nums.end());

	for (int i = tam - 1; i >= 0; --i)
	{
		aux += nums[i];
		ans++;
		if(aux > mitad)
			break;
	}


	cout << ans;
	
	return 0;
}