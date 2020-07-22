/*A. Theatre Square*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, m, a;
	long long aux; 

	long long ans = 0;

	cin >> n >> m >> a;

	ans = m / a;
	
	if(m % a != 0)
		ans++;

	if(n % a != 0)
		aux = n / a + 1;
	else
		aux = n/a;

	ans *= aux;

	cout << ans;

	return 0;
}