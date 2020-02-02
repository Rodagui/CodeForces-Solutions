/*F - Mr. Kitayuta's Gift*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	
	string cadena;
	string ans = "";

	cin >> cadena;

	if(cadena.size() == 1){
		cout << cadena << cadena;
	}
	else{

		string reverso;
		reverso = cadena;
		reverse(reverso.begin(), reverso.end());
		
		if(cadena == reverso){

			if(cadena.size() % 2 == 0){
				
				for (int i = 0; i < cadena.size() / 2; ++i)
					ans += cadena[i];
				
				ans += cadena[cadena.size() / 2];

				for (int i = cadena.size() / 2 ; i < cadena.size(); ++i)
					ans += cadena[i];
			}

			else{

				for (int i = 0; i <= cadena.size() / 2; ++i)
					ans += cadena[i];

				ans += cadena[cadena.size() / 2];

				for (int i = cadena.size() / 2 + 1 ; i < cadena.size(); ++i)
					ans += cadena[i];	
			}
		}

		else{

			ans = "NA";

			int j = cadena.size() - 1;
			string primera ="";
			string segunda ="";
			string op1 = "";
			string op2 = "";
			string op1Copy = "";
			string op2Copy  ="";

			for (int i = 0; i < cadena.size(); ++i)
			{
				if(cadena[i] == cadena[j]){
					primera += cadena[i];
					segunda = cadena[j] + segunda;
				}
				else{

					op1 = primera;
					op1 += cadena[j];

					for (int k = i ; k < cadena.size() ; ++k)
						op1 += cadena[k];


					for (int k = 0; k <= j ; ++k)
						op2 += cadena[k];
					
					op2 += cadena[i];
					op2 += segunda;

					break;
				}
				
				j--;
			}

			op1Copy = op1;
			reverse(op1Copy.begin(), op1Copy.end());

			op2Copy = op2;
			reverse(op2Copy.begin(), op2Copy.end());

			if(op1 == op1Copy)
				ans = op1;
			else if(op2 == op2Copy)
				ans = op2;
		}
		
		cout << ans;
	}

	return 0;
}