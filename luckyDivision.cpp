/*A. Lucky Division*/
#include <bits/stdc++.h>

using  namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	cin >> num;

	vector <int> divs = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};

	bool can = false;

	for (int i = 0; i < 10; ++i)
	{
		if(divs[i] == num or num % divs[i] == 0){
			can = true;
			break;
		}
	}

	if(can)
		cout << "YES";
	else
		cout << "NO";



	return 0;
}