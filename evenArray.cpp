/*B. Even Array*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;

	cin >> cases;

	while(cases--){

		int sizeArray;
		
		int even = 0; //par
		int odd = 0;

		cin >> sizeArray;

		vector <int> array(sizeArray);

		for (int i = 0; i < sizeArray; ++i)
		{
			cin >> array[i];

			if(i % 2 == 0 and array[i] % 2 == 1)
				even++;

			if(i % 2 == 1 and array[i] % 2 == 0)
				odd++;
		}

		if(even == odd)
			cout << even << '\n';
		else
			cout << "-1" << '\n';


	}

	return 0;
}