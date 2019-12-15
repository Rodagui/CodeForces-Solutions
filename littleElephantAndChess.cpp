/*A. Little Elephant and Chess*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	string chess1 = "WBWBWBWB";
	string chess2 = "BWBWBWBW";
	int ans = 0;

	for (int i = 0; i < 8; ++i)
	{
		cin >> cad;
		if(cad == chess1 or cad == chess2)
			ans++;
	}

	if(ans == 8)
		cout << "YES";
	else 
		cout << "NO";

	return 0;
}