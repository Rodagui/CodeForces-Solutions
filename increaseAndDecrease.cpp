/*B. Increase and Decrease*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int elem, x;
	int tot = 0;

	cin >> elem;

	for (int i = 0; i < elem; ++i)
	{
		cin >> x;
		tot += x;
	}

	if(tot % elem == 0)
		cout << elem;
	else
		cout << elem - 1;

	return 0;
}