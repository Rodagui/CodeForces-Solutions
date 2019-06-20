/*A. Tram*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int stops;

	cin >> stops;

	int in, out, tot= 0, maxi = 0;

	for (int i = 0; i < stops; ++i){
		cin >> out >> in;

		tot += in - out;

		if(tot > maxi)
			maxi = tot;
	}

	cout << maxi <<'\n';

	return 0;
}