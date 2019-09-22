/*B. Polo the Penguin and Matrix*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool can = true;
	int n, m, d;
	int mov = 0;
	int pos;
	int mod;

	cin >> n >> m >> d;

	vector <int> arr(n*m);


	for (int i = 0; i < n*m ; ++i)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());

	mod = arr[0] % d;

	for (int i = 1; i < n*m; ++i)
	{
		if(arr[i] % d != mod){
			can = false;
			break;
		}
	}

	pos = (n*m) / 2;

	if(can){
		for (int i = 0; i < n*m; ++i){
			mov += (abs(arr[i] - arr[pos])) / d;
		}

		cout << mov << '\n';
	}
	else
		cout << "-1\n";
	

	return 0;
}