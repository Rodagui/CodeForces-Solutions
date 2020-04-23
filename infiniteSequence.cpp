/*D - Infinite Sequence*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int primer;
	int fav;
	int dif;

	cin >> primer >> fav >> dif;

	

	if(fav == primer or (dif != 0 and (fav - primer) % dif == 0 and (fav - primer) / dif > 0))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}