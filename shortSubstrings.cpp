#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;

	while(cases--){

		string word;
		cin >> word;

		int tam = word.size();

		for (int i = 0; i < tam ; i+=2)
		{
			cout << word[i];
		}
		
		cout << word[tam - 1];

		cout << '\n';
	}

	return 0;
}