/*A. Die Roll*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int yakko, wakko;
	cin >> yakko >> wakko;
	int maxDie = 0;

	if(yakko >= wakko)
		maxDie = yakko;
	else
		maxDie = wakko;

	if(maxDie == 1)
		cout << "1/1";
	else if(maxDie == 2)
		cout << "5/6";
	else if(maxDie == 3)
		cout << "2/3";
	else if(maxDie == 4)
		cout << "1/2";
	else if(maxDie == 5)
		cout << "1/3";
	else if(maxDie == 6)
		cout << "1/6";
	

	return 0;
}