/*B. A and B and Compilation Errors*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map <int, int> arr;
	map <int, int> arr2;

	vector <int> ans(2);

	int tam;
	int num;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> num;

		if(arr.count(num))
			arr[num]++;
		else
			arr[num] = 1;
	}


	for (int i = 0; i < tam - 1; ++i)
	{
		cin >> num;

		arr[num]--;
			
		if(arr[num] == 0)
			arr.erase(num);
			
		if(arr2.count(num))
			arr2[num]++;
		else
			arr2[num] = 1;

	}
	
	map <int, int>::iterator it;

	for (it = arr.begin(); it != arr.end()  ; ++it)
		cout << it -> first << '\n';
	
	for (int i = 0; i < tam - 2; ++i)
	{
		cin >> num;
		
		arr2[num]--;
		if(arr2[num] == 0)
			arr2.erase(num);

	}

	for (it = arr2.begin(); it != arr2.end()  ; ++it)
		cout << it -> first;

	return 0;
}