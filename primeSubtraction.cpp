/*A. Prime Subtraction*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int casos;
 
	cin >> casos;
 
	while(casos--){
		long long x, y;
		cin >> x >> y;
 
		if((x - y) > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 
 
	return 0;
}