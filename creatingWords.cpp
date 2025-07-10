/*A. Creating Words*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;
	string word1, word2;

	while(cases--){
		cin >> word1 >> word2;
		swap(word1[0], word2[0]);
		cout << word1 << ' ' << word2 << '\n';
	}


	return 0;
}