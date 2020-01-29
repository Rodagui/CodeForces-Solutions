/*A. Shell Game*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	// ios_base::sync_with_stdio(0);
	// cout.tie(0);
	// cin.tie(0);

	ifstream cin("input.txt");
	ofstream cout("output.txt");

	vector <int> glass(3);
	int p, a;

	cin >> p;

	p--;
	glass[p] = 1;

	for (int i = 0; i < 3; ++i)
	{
		cin >> a >> p;
		a--;
		p--;
		swap(glass[a], glass[p]);
	}

	for (int i = 0; i < 3; ++i)
	{
		if(glass[i] == 1){
			cout << i + 1;
			break;
		}

	}

	return 0;
}