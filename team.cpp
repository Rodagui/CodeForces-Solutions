/*A. Team*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int contest, a, b, c;

	cin >> contest;

	int tot = 0;

	for (int i = 0; i < contest; ++i){
		cin >> a >> b >> c;

		if((a+b+c) >= 2)
			tot++;
	}

	cout << tot<<'\n';
	return 0;
}