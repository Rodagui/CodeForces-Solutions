/*A. Minimize!*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases; 
	cin >> cases;
	int a, b;
	int minAns = INT_MAX;

	while(cases--){

		minAns = INT_MAX;
		
		cin >> a >> b;

		for (int i = a; i <= b; ++i)
		{
			
			if( (i-a) + (b-i) < minAns)
				minAns = (i-a) + (b-i);
		}

		cout << minAns << '\n';
	}
	return 0;
}
