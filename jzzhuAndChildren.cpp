/*A. Jzzhu and Children*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int kids, candies;

	cin >> kids >> candies;

	int want[kids];
	int max = -1;

	double aux;

	for (int i = 0; i < kids; ++i)
	{
		cin >> want[i];
		aux =  ceil((double) want[i] / (double)candies);

		want[i] = (int)aux;

		if(want[i] > max)
			max = want[i];
	}

	for (int i = kids-1; i >= 0 ; --i)
	{
		if(want[i] == max){
			cout << i + 1 <<'\n';
			break;
		}
	}

	return 0;
}