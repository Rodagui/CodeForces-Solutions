/*B. Divisors of Two Integers*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int num1; 

	cin >> n;

	vector <int> divisors(n);
	vector <int> freq(10005);

	for (int i = 0; i < n; ++i)
		cin >> divisors[i];

	sort(divisors.begin(), divisors.end());


	if(divisors[n-1] == divisors[n-2]){
		cout << divisors[n-1] << ' ' << divisors[n-1];
	}
	else{

		num1 = divisors[n - 1];

		cout << num1 << ' ';

		for (int i = 0; i < n; ++i)
		{

			if(num1 % divisors[i] == 0){
				

				if(freq[divisors[i]] == 0)
				{
					freq[divisors[i]] = 1;
					divisors[i] = -1;
				}

			}
		}

		for (int i = n - 1; i >= 0; --i)
		{
			if( divisors[i] != -1){
				cout << divisors[i];
				break;
			}

		}
	}

	return 0;
}