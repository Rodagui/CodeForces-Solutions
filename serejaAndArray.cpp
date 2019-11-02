/*B. Sereja and Array*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0),
	cin.tie(0);
	cout.tie(0);

	int nums, queries;
	cin >> nums >> queries;

	vector <long long> arr(nums);

	for (int i = 0; i < nums; ++i)
	{
		cin >> arr[i];
	}

	long long suma = 0ll;
	int op, p, q;

	for (int i = 0; i < queries; ++i)
	{
		cin >> op;

		if(op == 1){
			cin >> p >> q;
			arr[p - 1] = q - suma;
		}
		else if(op == 2){
			cin >> p;
			suma += p;
		}
		else{
			cin >> p;
			cout << arr[p - 1] + suma<< '\n';
		}
	}

	return 0;
}