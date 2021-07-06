/*A. Pangram*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int sizeWord;
	string word;
	set <char> alphabet;

	cin >> sizeWord;
	cin >> word;

	for (int i = 0; i < sizeWord; ++i)
	{
		word[i] = tolower(word[i]);
		alphabet.insert(word[i]);
	}

	if(alphabet.size() == 26)
		cout << "YES";
	else
		cout << "NO";

	

	return 0;
}