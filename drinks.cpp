/*B. Drinks*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	double total = 0, aux;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> aux;

		total += aux;
	}

	total /= (double)n;

	cout << fixed << showpoint;
	cout << setprecision(12);
	cout << total <<'\n';




	return 0;
}