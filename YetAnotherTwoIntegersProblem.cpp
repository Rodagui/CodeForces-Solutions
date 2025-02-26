#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int a, b;
	int cases;
	cin >> cases;
	int ans = 0;
	int resta;


	while(cases--){
		
		ans = 0;
		cin >> a >> b;

		if(a == b){
			ans = 0;
		}
		else{
			resta = abs(a - b);
			ans = (resta / 10);

			if(resta % 10 != 0 )
				ans++;
		}

		cout << ans << "\n";
	

	}


	return 0;
}