/*A. cAPS lOCK*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string word;

	cin >> word;

	int mayus = 0;

	if(word.size() == 1){
		if(isupper(word[0]))
			word[0] = tolower(word[0]);
		else 
			word[0] = toupper(word[0]);
	}
	else{

		for (int i = 0; i < word.size(); ++i)
		{
			if(isupper(word[i])){
				mayus++;
			}
		}

		if(mayus == word.size()){
			


			for (int i = 0; i < word.size(); ++i)
			{
				word[i] = tolower(word[i]);
			}
		}
		else if(mayus == word.size() - 1 and islower(word[0])){
			word[0] = toupper(word[0]);

			for (int i = 1; i < word.size(); ++i)
			{
				word[i] = tolower(word[i]);
			}
		}

	}

	cout << word;
	
	return 0;
}