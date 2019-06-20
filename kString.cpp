/*A. k-String*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool can = true;
	int maxi = -1;
	string word;
	int k;

	cin >> k >> word;

	vector <int> letras(26);

	for (int i = 0; i < word.size(); ++i){
		letras[word[i]-97]++;

		if(letras[word[i]-97] > maxi)
			maxi = letras[word[i]-97];
	}


	for (int i = 0; i < 26 ; ++i){

		if( (k % 2 == 0 and letras [i] > 0 and letras[i] % k != 0) or (letras [i] > 0 and letras[i] < k )){
			can = false;
			break;
		}

		if( (k % 2 == 1 and letras [i] > 0 and letras[i] % k != 0) or (letras [i] > 0 and letras[i] < k ) ){
			can = false;
			break;
		}

	}

	int veces;
	string nva = "";
	
	if(can){

			for (int i = 0; i < 26; ++i)
			{
				veces = letras[i] / k;

				for (int j = 0; j < veces ; ++j)
				{
					nva += (char)(i+97);
				}


			}

			for (int i = 0; i < k; ++i)
			{
				cout << nva;
			}
	}
	else
		cout << "-1\n";


	return 0;
}