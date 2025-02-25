#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int casos;
	cin>>casos;
	int a, b, c;
	bool ans = false;

	while(casos--){

		cin>> a >> b >> c;

		if(a == (b + c))
			ans = true;

		if(b == (a + c))
			ans = true;

		if(c == (b + a))
			ans = true;

		if(ans)
			cout << "YES\n";
		else
			cout << "NO\n";

		ans = false;

	}
	

	return 0;
}