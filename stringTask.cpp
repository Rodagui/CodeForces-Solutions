/*A. String Task*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string word;

	cin >> word;

	string nva = "";
	char c;

	for (int i = 0; i < word.size(); ++i){
		
		if(word[i] != 'a' and word[i] != 'A' and word[i] != 'O' and word[i] != 'o' and word[i] != 'y' and word[i] != 'Y' and word[i] != 'e' and word[i] != 'E' and word[i] != 'U' and word[i] != 'u' and word[i] != 'i' and word[i] != 'I'){

			if(word[i] > 64 and word[i] < 91){
				c = (char)(word[i]+ 32);
				nva += c;
			}
			else{
				nva += word[i];
			}

		}

	}


	for (int i = 0; i < nva.size(); ++i)
		cout << '.'<<nva[i];
	
	return 0;
}