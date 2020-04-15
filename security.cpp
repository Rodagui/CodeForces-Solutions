/*A - Security*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cod;
	cin >> cod;

	bool hard = false;
	
	for (int i = 0; i < cod.size() - 1; ++i)
	{
		if(cod[i] == cod[i + 1]){
			hard = true;
		}	
	}

	if(hard){
		cout << "Bad";
	}
	else{
		cout << "Good";
	}
	
	
	return 0;
}