#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	vector <int> arr(3);

	while(cases--){

		for (int i = 0; i < 3; ++i)
			cin >> arr[i];

		sort(arr.begin(), arr.end());
		cout << arr[1] << "\n";
		
		
	}
	

	return 0;
}