/*A. Crazy Computer*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	bool band = true;
	int ans = 1;
	int ultimo;
	int nums;
	int lim;
	int t;

	cin >> nums >> lim;

	for (int i = 0; i < nums ; ++i)
	{
		cin >> t;

		if(band){
			band = false;
		}
		
		else{

			if (t - ultimo <= lim)
				ans++;
			else
				ans = 1;
		}

		ultimo = t;
	}

	cout << ans;

	return 0;
}