/*C. XOR and OR*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad1;
	string cad2;
	cin >> cad1 >> cad2;


	if(cad1 == cad2){
		cout << "YES";
	}
	else{
		if(cad1.size() != cad2.size()){
			cout << "NO";
		}
		else{

			int ceros = 0;
			int unos =  0;

			for (int i = 0; i < cad2.size() ; ++i)
			{
					if(cad2[i] == '0')
						ceros++;
					if(cad1[i] == '1')
						unos++;
			}

			if(ceros == cad2.size())
				cout << "NO";
			else{
				
				if(unos > 0)
					cout << "YES";
				else
					cout << "NO";
			}


		}
	}
	return 0;
}