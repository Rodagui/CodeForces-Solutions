#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	int num;
	int sumA; 
	int sumB;

	while(cases--){

		cin >> num;

		sumA = 0; 
	 	sumB = 0;

	 	for (int i = 0; i < 3; ++i)
	 	{
	 		sumA += num % 10;
	 		num /= 10;
	 	}

	 	for (int i = 0; i < 3; ++i)
	 	{
	 		sumB += num % 10;
	 		num /= 10;
	 	}

	 	if(sumA == sumB)
	 		cout << "YES\n";
	 	else
	 		cout << "NO\n";
	

	}
	

	return 0;
}