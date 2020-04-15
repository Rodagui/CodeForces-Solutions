/*B - Ordinary Number*/
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

	for (int i = 0; i < tam; ++i){
		cin >> arr[i];
	}

	bool medio;
	int ans = 0;

	for (int i = 1; i < tam - 1 ; ++i)
	{
		medio = true;
		
		if(arr[i] < arr[i - 1] and arr[i] < arr[i + 1]){
			medio = false;
		}
		else if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1]){
			medio = false;
		}

		if(medio){
			ans++;
		}
	}

	cout << ans;


	return 0;
}