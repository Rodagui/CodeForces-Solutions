/**C. Registration system*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie();

	int cases;

	cin>> cases;
	string user;
	int num;
	map <string, int> regis;

	while(cases--){

		cin >> user;

		if(!regis.empty() and regis.count(user)){
			regis[user]++;
			cout << user << regis[user] << '\n';
		}
		else{
			regis[user] = 0;
			cout << "OK\n";
		}

	}


	return 0;
}