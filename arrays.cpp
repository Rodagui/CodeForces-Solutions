/*A. Arrays*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	Long tamA, tamB;
	Long k, m;

	cin >> tamA >> tamB;
	cin >> k >> m;

	vector <int> arrA(tamA);
	vector <int> arrB(tamB);

	for (int i = 0; i < tamA; ++i)
		cin >> arrA[i];

	for (int i = 0; i < tamB; ++i)
		cin >> arrB[i];

	sort(arrA.begin(), arrA.end());
	sort(arrB.begin(), arrB.end());

	if(arrA[k-1] < arrB[tamB - m])
		cout << "YES";
	else
		cout << "NO";

	return 0;
}