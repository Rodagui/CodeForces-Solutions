/*A. Blackjack*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	if(n <= 10){
		cout << "0";
	}
	else{
		if( n <= 19){
			cout << "4";
		}
		else if(n == 20){
			cout << "15";
		}
		else if(n== 21){
			cout << "4";
		}
		else{
			cout << "0";
		}
	}


	return 0;
}