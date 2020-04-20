/*B. Ants*/

#include <bits/stdc++.h>
using namespace std;
using Long = int;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long ants;
	Long n;
	cin >> ants;
	string numero;

	unordered_set <Long> nums;
	
	for (int i = 0; i <= 1e6; ++i)
	{
		nums.insert(i);	
	}

	for (int i = 0; i < ants; ++i)
	{
		cin >> numero;

		if(numero.size() < 7 or numero == "1000000"){
			n = stoi(numero);
			if(n >= 0){
				nums.erase(n);
			}
		}
	}

	unordered_set <Long>:: iterator it;

	int minimo = INT_MAX; 

	for (it = nums.begin(); it != nums.end() ; ++it)
	{
		if(*it < minimo){
			minimo = *it;
		}
	}

	cout << minimo;
	
	return 0;
}