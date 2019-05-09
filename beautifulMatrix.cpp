/*BeautifulMatrix*/

#include <iostream>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x, y, num, tot = 0;

	for (int i = 0; i < 5; ++i){

		for (int j = 0; j < 5; ++j){
			
			cin >> num;

			if(num == 1){
				x = i;
				y = j;
			}

		}
	}

	tot = abs(2 - x);
	tot += abs(2 - y);

	cout<<tot<<'\n';

	return 0;
}