/*C - Wrong Subtraction*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int veces;
	int num;

	cin >> num >> veces;

	while(veces--){

		if(num % 10 != 0)
			num--;
		else
			num /= 10;
			
	}

	cout << num;

	return 0;
}