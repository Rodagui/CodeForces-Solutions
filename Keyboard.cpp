#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	char direction;
	string frase;

	cin >> direction;
	cin >> frase;

	int pos;
	int letter;
	string ans = "";

	vector <char> arrR = {'a', 'v', 'x', 's', 'w', 'd', 'f', 'g', 'u', 'h', 'j', 'k', 'n', 'b', 'i', 'o', 'q', 'e', 'a', 'r', 'y', 'c', 'q', 'z', 't', 'z'};
	vector <char> arrL = {'s', 'n', 'v', 'f', 'r', 'g', 'h', 'j', 'o', 'k', 'l', ';', ',', 'm', 'p', 'p', 'w', 't', 'd', 'y', 'i', 'b', 'e', 'c', 'u', 'x'};
	
	if(direction == 'R'){
		
		for (int i = 0; i < frase.size(); ++i)
		{
			if(frase[i] == ';')
				letter = 'l';

			else if(frase[i] == ',')
				letter = 'm';

			else if(frase[i] == '.')
				letter = ',';

			else if(frase[i] == '/')
				letter = '.';

			else{
				pos = frase[i] - 'a';
				letter = arrR[pos];
			}

			ans += letter;
		}
	}

	if(direction == 'L'){

		for (int i = 0; i < frase.size(); ++i)
		{
			if(frase[i] == ',')
				letter = '.';
			else if(frase[i] == '.')
				letter = '/';
			else{
				pos = frase[i] - 'a';
				letter = arrL[pos];
			}	

			ans += letter;
		}
	
	}


	cout << ans;
	return 0;
}