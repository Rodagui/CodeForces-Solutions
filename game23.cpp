/*A. Game 23*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Long n, m;

	cin >> n >> m;

	Long div;
	Long cont = 0;

	if(m % n != 0){
		cout << "-1\n";
	}
	else
	{

		if( m == n){
			cout << "0\n";

		}
		else{

			div = m / n;

			if(div != 0){

				while(div != 0){

					if(div % 2ll == 0){
						div = div / 2ll;
						//cout << div << '\n';
						cont++;
					}
					else if(div % 3ll == 0){
						div = div / 3ll;
						//cout << div << '\n';
						cont++;
					}
					else{
						break;
					}

				}

				if(div == 1)
					cout << cont << '\n';
				else
					cout << "-1\n";

			
				
			}
			else{
				cout << "-1\n";
			}
		}


	}


	return 0;
}