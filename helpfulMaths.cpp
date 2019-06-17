/*A. Helpful Maths*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string suma;

	cin >> suma;

	vector <int> nums(3);
	
	char sim;
	int cod;

	for (int i = 0; i < suma.size(); ++i){
		sim = suma[i];

		if(isdigit(sim)){
			cod = sim - 49;

			nums[cod]++;
		}
	}

	int band = 0;

	for (int i = 0; i < 3; ++i){

		cod = nums[i];
		for (int j = 0; j < cod ; ++j)
		{
			if(band > 0)
				cout << '+';
			
			cout << i + 1;
			
			band = 1;
		}
	}

	return 0;
}