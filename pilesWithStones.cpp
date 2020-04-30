/*A - Piles With Stones*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	int day1 = 0;
	int day2 = 0;
	int p;

	for (int i = 0; i < tam; ++i)
	{
		cin >> p;
		day1 += p;
	}

	for (int i = 0; i < tam; ++i)
	{
		cin >> p;
		day2 += p;
	}

	if(day2 > day1)
		cout << "No";
	else
		cout << "Yes";
	
	return 0;
}