/*A. Cinema Line*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int money;
	int need = 0;
	int have = 0;
	int veinticinco = 0;
	int cincuenta = 0;
	bool can = true;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> money;
		need = money - 25;
		
		if(need > have)
			can = false;
			
		if(money == 25)
			veinticinco++;
		else if(money == 50){
			
			if(veinticinco > 0)
				veinticinco--;
			else
				can = false;

			cincuenta++;
		}
		else{

			if(cincuenta > 0 and veinticinco > 0){
				cincuenta--;
				veinticinco--;
			}
			else if(cincuenta == 0 and veinticinco >= 3){
				veinticinco -= 3;
			}
			else{
				can = false;
			}

		}

		have += 25;
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}