/*B. Delete from the Left*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad1;
	string cad2;

	cin >> cad1 >> cad2;

	int aux = 0;
	int ans;

	if(cad1.size() < cad2.size()){

		int j = cad2.size() - 1;

		for (int i = cad1.size() - 1; i >= 0 ; --i)
		{
			if(cad1[i] == cad2[j]){
				aux++;
				j--;
			}
			else{
				break;
			}
		}

		

	}
	else if(cad2.size() < cad1.size() ){

		int j = cad1.size() - 1;

		for (int i = cad2.size() - 1; i >= 0 ; --i)
		{
			if(cad2[i] == cad1[j]){
				aux++;
				j--;
			}
			else{
				break;
			}
		}

		

	}
	else{

		for (int i = cad1.size() - 1; i >= 0 ; --i)
		{
			if(cad2[i] == cad1[i]){
				aux++;
			}
			else{
				break;
			}
		}

	}

	ans = cad1.size() - aux;
	ans += (cad2.size() - aux);

	cout << ans;

	

	return 0;
}