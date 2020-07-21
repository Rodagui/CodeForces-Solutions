/*A. Gravity Flip*/
#include <bits/stdc++.h>
using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	for (int i = 0; i < tam; ++i)
	{
		if(i > 0)
			cout << ' ';
		
		cout << arr[i];
	}

	return 0;
}