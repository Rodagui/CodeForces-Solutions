/*A. LLPS*/ 

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string word;

	cin >> word;

	char letra ='a';

	for (int i = 0; i < word.size() ; ++i)
	{
		if(word[i] > letra)
			letra = word[i];
	}

	for (int i = 0; i < word.size(); ++i)
		if (word[i] == letra)
			cout << letra;
		
	return 0;
}