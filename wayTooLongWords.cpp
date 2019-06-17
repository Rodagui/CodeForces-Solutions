/*A. Way Too Long Words*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin >> casos;
	string word;

	for (int i = 0; i < casos; ++i)
	{
		cin >> word;

		if(word.size() <= 10)
			cout << word << '\n';
		
		else
			cout << word[0] << word.size() - 2 << word[word.size() - 1] <<'\n';

		
	}

	return 0;
}