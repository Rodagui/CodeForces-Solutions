/*A. Business trip*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int large;

	cin >> large;

	vector <int> hight(12);

	for (int i = 0; i < 12; ++i){
		cin >> hight[i];
	}

	sort(hight.begin(), hight.end(), greater<int>());

	int tot = 0;
	int dias = 0;

	if(large == 0){
		cout << "0\n";
	}
	else{

		for (int i = 0; i < 12; ++i){
			
			tot += hight[i];
			dias++;

			if(tot >= large)
				break;

			
		}

		if(tot < large)
			dias = -1;

		cout << dias<< '\n';
	}

	return 0;
}