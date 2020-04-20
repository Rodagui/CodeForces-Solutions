/*C. Andryusha and Socks*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	set <int> nums;
	int maximo = -1;
	int socks;
	int n;

	cin >> socks;

	for (int i = 0; i < 2 * socks ; ++i)
	{
		cin >> n;

		if(nums.count(n) == 0){
			nums.insert(n);
			maximo = max(int(nums.size()), maximo);
		}
		else{
			nums.erase(n);
		}
	}

	cout << maximo;

	return 0;
}