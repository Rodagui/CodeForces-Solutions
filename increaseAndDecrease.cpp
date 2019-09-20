/*B. Increase and Decrease*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int elem;
	cin >> elem;

	vector <int> arr(elem);

	int tot = 0;
	for (int i = 0; i < elem; ++i)
	{
		cin >> arr[i];
		tot += arr[i];
	}

	if(tot % elem == 0)
		cout << elem;
	else
		cout << elem - 1;

	return 0;
}