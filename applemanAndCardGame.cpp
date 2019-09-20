/*B. Appleman and Card Game*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector <long long> letters(26);
	long long choose;
	int cards;

	cin >> cards >> choose;

	string linea;
	cin >> linea;

	for (int i = 0; i < linea.size(); ++i){
		int indice = linea[i] - 'A';
		letters[indice]++;
	}

	sort(letters.begin(), letters.end(), greater<int>());
		
	long long tot = 0;
	int i;

	for (i = 0; i < 26; ++i)
	{	

		if((choose - letters[i]) >= 0){
			tot += (letters[i] * letters[i]);
			choose -= letters[i];
		}
		else
			break;

	}

	if(choose > 0)
		tot += (choose * choose);
	
	
	cout << tot << '\n';

	return 0;
}