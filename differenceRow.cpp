/*A. Difference Row*/
 
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
 
	sort(arr.begin(), arr.end(), greater<int>());

	cout << arr[0] << " ";
 
	for (int i = tam - 2; i > 0; --i)
		cout << arr[i] << ' ';
 
	cout << arr[tam - 1] << "\n";

	return 0;
}