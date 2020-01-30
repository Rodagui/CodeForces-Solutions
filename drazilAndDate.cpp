/*A. Drazil and Date*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;

	cin >> a >> b >> c;

	a = abs(a);
	b = abs(b);
	
	if(a + b <= c and (c - a - b) % 2 != 1)
		cout << "Yes";
	else 
		cout << "No";
	

	return 0;
}