/*C. Ternary XOR*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){
		
		bool unoA = false;
		string a = "";
		string b = "";
		string num;
		int tam;

		cin >> tam >> num;

		for (int i = 0; i < tam; ++i)
		{
			if(i == 0){
				a+= '1';
				b+= '1';
			}
			else{
				if(num[i] == '2'){

					if(unoA){
						a+= '0';
						b+= '2'; 
					}
					else{
						a+= '1';
						b+= '1';
					}
				}
				else if(num[i] == '1'){
					if(unoA == false){
						a+= '1';
						b+= '0'; 
						unoA = true;
					}
					else{
						a+= '0';
						b+= '1';
					}
				}
				else{
					a+='0';
					b+='0';
				}
			}
		}

		cout << a << '\n' << b << '\n';

	}

	return 0;
}