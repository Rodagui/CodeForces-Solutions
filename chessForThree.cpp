/*D - Chess For Three*/
/*A - Piles With Stones*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int games;

	cin >> games;

	bool alex = true;
	bool bob = true;
	bool carl = false;

	int winner;
	bool can = true;

	for (int i = 0; i < games; ++i)
	{
		cin >> winner;

		if(winner == 1){
			if(alex == false){
				can = false;
			}
			else{

				if(bob){
					bob = false;
					carl = true;
				}
				else{
					carl = false;
					bob = true;
				}
			}
		}
		else if(winner == 2){

			if(bob == false){
				can = false;
			}
			else{
				if(alex){
					alex = false;
					carl = true;
				}
				else{
					carl = false;
					alex = true;
				}
			}
		}
		else{
			if(carl == false){
				can = false;
			}
			else{
				if(bob){
					bob = false;
					alex = true;
				}
				else{
					alex = false;
					bob = true;
				}
			}
		}
	}

	if(can)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}