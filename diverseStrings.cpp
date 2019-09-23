/*B - Diverse Strings*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;

	cin >> cases;

	string linea;

	while(cases--){

		cin >> linea;

		if(linea.size() == 1){
			cout << "Yes\n";
		}
		else{

			bool onlyOne = true;

			vector <int> alphabet(26);

			int pos;

			for (int i = 0; i < linea.size(); ++i)
			{
				pos = linea[i] - 'a';
				alphabet[pos]++;

				if (alphabet[i] > 1)
					onlyOne = false;
				
			}

			bool adj = false;

			if(onlyOne){

				int cta = 0;
				int band = 0;

				for (int i = 0; i < 26; ++i)
				{
					if(alphabet[i] == 0 and band == 1)
						break;
					
					if(alphabet[i] == 1 and (band == 0 or band == 1)){
						band = 1;
						cta++;
					}
				}


				if(cta == linea.size())
					cout << "Yes\n";
				else
					cout << "No\n";
			}
			else{
				cout << "No\n";
			}
		}


	}

	return 0;
}