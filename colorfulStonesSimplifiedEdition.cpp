/*A. Colorful Stones (Simplified Edition)*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	string instruc;

	cin >> cad;
	cin >> instruc;

	char letra = cad[0];
	int ans = 1;
	int pos = 0;
	int j = 0;

	for (int i = 0; i < instruc.size(); ++i)
	{
		if(instruc[i] == letra){
			ans++;
			pos++;
			letra = cad[pos]; 
		}
	}

	cout << ans;

	return 0;
}