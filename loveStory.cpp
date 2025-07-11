/*A. Love tory*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;

	string word;
	string codeforces = "codeforces";
	int ans = 0;

	while(cases--){	
		
		ans = 0;
		cin >> word;

		for (int i = 0; i < 10; ++i)
		{
			if(word[i] != codeforces[i])
				ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}