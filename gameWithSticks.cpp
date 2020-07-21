/*A. Game With Sticks*/
#include <bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	int minimo;
	minimo = min(n, m);

	if(minimo % 2 == 0)
		cout << "Malvika";
	else
		cout << "Akshat";

	
	return 0;
}