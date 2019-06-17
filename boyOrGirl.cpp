/*A. Boy or Girl*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string username;

	cin >> username;

	set <int> letters;

	for (int i = 0; i < username.size(); ++i)
		letters.insert(username[i]);
	
	if(letters.size()% 2 == 0)
		cout << "CHAT WITH HER!\n";
	else
		cout << "IGNORE HIM!\n";

	return 0;
}