/*Mashmokh and Lights*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int lights;
	int op;
	int pos;

	cin >> lights >> op;
	vector <int> arr(lights);

	for (int i = 0; i < op; ++i)
	{
		cin >> pos;
		pos--;

		for (int i = pos; i < lights ; ++i)
		{
			if(arr[i] != 0)
				break;

			arr[i] = pos+1;
		}
	}

	for (int i = 0; i < lights; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}