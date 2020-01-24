/*A. Buggy Sortings*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	cin >> num;

	if(num == 1 or num == 2)
		cout << "-1";
	else
		for (int i = num; i > 0 ; --i)
			cout << i << ' ';
		

	
	return 0;

}
