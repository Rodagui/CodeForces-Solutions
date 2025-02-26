#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int a, b, c, d;
	int cases;
	int ans = 0;

	cin >> cases;

	while(cases--){
		
		ans = 0;

		cin >> a >> b >> c >> d;

		if(b > a)
			ans++;

		if(c > a)
			ans++;

		if(d > a)
			ans++;

		cout << ans << "\n";

	}


	return 0;
}