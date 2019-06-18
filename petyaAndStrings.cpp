/*A. Petya and Strings*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cad1, cad2;

	cin >> cad1 >> cad2;

	string pal1="", pal2="";
	char c;

	for (int i = 0; i < cad1.size(); ++i){
		
		c = cad1[i];

		if(c > 64 and c <91)
			c = (char)(cad1[i] + 32);

		pal1 += c;

		c = cad2[i];

		if(c > 64 and c <91)
			c = (char)(cad2[i] + 32);

		pal2 += c;

	}


	if(pal1 == pal2)
		cout << "0\n";
	else{

		for (int i = 0; i < cad1.size(); ++i){

			if(pal1[i] != pal2[i]){
				if(pal1 < pal2)
					cout<<"-1\n";
				else
					cout<<"1\n";

				break;
			}

		}
	}

	return 0;
}