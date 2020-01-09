/*A. GukiZ and Contest*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> original(tam);
	vector <int> nums(2005);
	vector <int> acum(2005);

	for (int i = 0; i < tam; ++i)
	{
		cin >> original[i];
		nums[original[i]]++;
	}

	for (int i = 1; i < 2005 ; ++i)
		acum[i] = nums[i] + acum[i-1];	
	
	for (int i = 0; i < tam; ++i)
		cout << 1 + tam - acum[original[i]] << ' ';
	

	return 0;
}