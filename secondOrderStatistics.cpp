/*B - Second Order Statistics*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int n;

	cin >> tam;

	set <int> nums;
	vector <int> arr;

	for (int i = 0; i < tam ; ++i)
	{
		cin >> n;

		if(nums.count(n) == 0){
			arr.push_back(n);
			nums.insert(n);
		}
	}

	sort(arr.begin(), arr.end());

	if(arr.size() > 1){
		cout << arr[1];
	}
	else{
		cout << "NO";
	}

	return 0;
}