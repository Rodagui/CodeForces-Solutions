/*A. Watermelon*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int peso;
	cin >> peso;

	if(peso % 2 == 0 and peso > 2)
		cout << "YES";
	
	else
		cout <<"NO";

	return 0;
}