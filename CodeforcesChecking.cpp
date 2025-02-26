#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	char letter;

	while(cases--){

		cin >> letter;

		if(letter == 'c' or letter == 'o' or letter == 'd' or letter == 'e' or letter == 'f' or letter == 'r' or letter == 's')
			cout  << "YES\n";
		else
			cout  << "NO\n";
		
	}
	

	return 0;
}