/*C. Two Teams Composing*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		map <int, int> nums;
		int tam;
		int n;

		cin >> tam;

		for (int i = 0; i < tam; ++i)
		{
			cin >> n;
			if(nums.count(n))
				nums[n]++;
			else
				nums[n] = 1;
		}

		map<int, int>::iterator it;

		int ans = 0;
		int tamMap;
		tamMap = nums.size();
		int aux;

		for (it = nums.begin(); it != nums.end() ; ++it)
		{
			
			if(it -> second <= tamMap)
				aux = min(it -> second, tamMap - 1);
			else 
				aux = min(it -> second, tamMap);

			ans = max(aux, ans);
		}

		cout << ans << '\n';

	}

	return 0;
}