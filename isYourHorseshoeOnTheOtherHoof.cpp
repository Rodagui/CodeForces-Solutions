/*A. Is your horseshoe on the other hoof?*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	set <int> horseshoe;
	int num;

	for (int i = 0; i < 4; ++i){
		
		cin >> num;
		horseshoe.insert(num);	

	}

	cout << 4 - horseshoe.size()<< '\n';

	return 0;
}