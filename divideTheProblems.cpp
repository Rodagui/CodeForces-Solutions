/*C - Divide the Problemsr*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;

	vector <int> arr(tam);

	int ans = 0;

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
	}

	if(tam % 2 == 0){
		
		int mitad = tam / 2;
		sort(arr.begin(), arr.end());

		if(arr[mitad - 1] != arr[mitad]){
			ans = arr[mitad] - arr[mitad - 1];
		}
	}

	cout << ans;
	
	return 0;
}