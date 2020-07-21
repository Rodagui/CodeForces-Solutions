/*A. Bear and Big Brother*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool bigger = true;
	int ans = 0;
	int limak;
	int bob;

	cin >> limak >> bob;

	while( bigger ){
		limak *= 3;
		bob *= 2;
		ans++;

		if(limak > bob)
			bigger = false;
	}

	cout << ans;

	return 0;
}