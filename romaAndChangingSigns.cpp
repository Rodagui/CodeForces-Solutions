/*B. Roma and Changing Signs*/

//se puede optimizar guardando el minimo desde un principio y quitabdo el sort
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int nums, cambios;

	cin >> nums >> cambios;
	vector <long long> arr(nums);
	long long total = 0ll;

	for (int i = 0; i < nums; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < nums ; ++i)
	{
		if(arr[i] > 0)
			break;

		if(arr[i] < 0){
			arr[i] *= -1;
			cambios--;
		}

		if(cambios == 0)
			break;

	}

	sort(arr.begin(), arr.end());

	if(cambios > 0){

		if(cambios % 2 == 1)
			arr[0] *= -1;
		
	}

	for (int i = 0; i < nums ; ++i)
	{
		total += arr[i];
	}

	cout << total;

	return 0;
}