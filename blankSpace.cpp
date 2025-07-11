/*B. Blank Space*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;
	int tam;
	int ans;
	int cta;
	int num;

	while(cases--){
		
		cin >> tam;
		cta = 0;
		ans = 0;

		for (int i = 0; i < tam; ++i)
		{
			cin >> num;

			if(num == 0)
				cta++;
			else
				cta = 0;

			if(cta > ans)
				ans = cta;

		}

		cout << ans << '\n';
	}

	return 0;
}