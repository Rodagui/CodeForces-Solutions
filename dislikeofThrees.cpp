/*A. Dislike of Threes*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	

	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int cases;

	cin >> cases;

	int num = 1;
	int k;

	while(cases--){

		num = 0;

		cin >> k;

		while(k)
		{
			num++;

			if(num % 10 != 3 and num % 3 != 0)
				k--;
		}

		cout << num << endl;



	}


	return 0;
}

