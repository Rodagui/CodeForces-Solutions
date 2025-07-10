/*A. Game with Integers*/
/*La neta no sé por que el n=1 lo gana Vanya
pero los demás, si n es divisible por 3 al principio
no va a poder ganar Vanya, cuando no, solo basta con 
sumar o restar 1 */
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;

	int num;

	while(cases--){
		cin >> num;

		if(num == 1 or num == 2 or num % 3 != 0)
			cout << "First\n";
		else
			cout << "Second\n";
	}

	return 0;
}