/*A. Odd Divisor*/

#include <bits/stdc++.h>

using namespace std;

bool factoresPrimos(double num) {

    bool ans = false;
    
    for (int i = 2; i * i <= num; ++i) {
        while ((int)num % i == 0) {
            
            if(i % 2 == 1)
                return true;
            
            num /= i;
        }
    }

    if (num > 1)    
        if( (int)num % 2 == 1)
                return true;

    return ans;
}

int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

    int cases;
	double num;

    cin >> cases;

    while(cases--){

        cin >> num;

        if(factoresPrimos(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    
    }
	
	return 0;
}