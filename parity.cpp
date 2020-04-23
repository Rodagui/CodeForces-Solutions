/*C - Parity*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

inline Long fastPow(Long a, Long p, Long m); 

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long base;
	Long pot;
	Long p;

	cin >>base >> pot;

	Long ans = 0;
	Long coe;

	for (int i = 0; i < pot ; ++i)
	{
		cin >> coe;
		p = pot - (i + 1ll);

		ans += (fastPow(base, p, 2ll) * (coe % 2ll));

		ans %= 2ll;
	}

	if(ans == 1){
		cout << "odd";
	}
	else{
		cout << "even";
	}

	return 0;
}

inline Long fastPow(Long a, Long p, Long m){
	a %= m;
	Long ans = 1ll;

	while(p != 0ll){
		if(p & 1ll == 1ll)
			ans = (ans * a) % m;

		a = (a*a) % m;

		p >>= 1ll;
	}

	return ans;

}