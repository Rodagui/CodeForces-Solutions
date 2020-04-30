/*E - Browser*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int right;
	int left;
	int tam;
	int pos;

	cin >> tam >> pos >> left >> right;

	int ans = 0;

	if(pos < left){

		ans = left - pos + 1;
		
		if(right < tam)
			ans += right - left + 1;
	}
	else if(pos > right){
		ans = pos - right + 1;
		if(left > 1)
			ans += right - left + 1;
	}
	
	else if(left == 1){
		if(right < tam)
			ans = right - pos + 1;
	}
	else if( right == tam){
		if(left > 1)
			ans = pos - left + 1;
		
	}
	else{

		if(right - pos < pos - left){
			ans = right - pos + 1;
			ans += right - left + 1;
		}
		else{
			
			ans = pos - left + 1;
			ans += right - left + 1;
		}
	}

	cout << ans;

	return 0;
}