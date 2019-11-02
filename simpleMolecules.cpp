/*B. Simple Molecules que problema tan feo :v */
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <pair <int, int> > nums;
	vector <int> ans(3);
	int aux = 0;
	int a, b, c;
	int uniA, uniB, uniC;
	bool can = true;

	for (int i = 0; i < 3; ++i)
	{
		cin >> a;
		nums.push_back(make_pair(a, i));
	}

	sort(nums.begin(), nums.end());

	a = nums[0].first;
	b = nums[1].first;
	c = nums[2].first;
	uniA = nums[0].second;
	uniB = nums[1].second;
	uniC = nums[2].second;

	aux = b - a;

	if(uniC == 0){

		if(uniB == 1)
			ans[0] = aux;
		else
			ans[2] = aux;
		
	}
	else if(uniC == 1){

		if(uniB == 0)
			ans[0] = aux;
		else
			ans[1] = aux;
	}
	else{

		if(uniB == 1)
			ans[1] = aux;
		else
			ans[2] = aux;
	}

	aux = c - aux;
	c = aux;
	aux /= 2;
	b = a;
	a -= aux;
	b -= aux;

	if(uniC == 0){
		ans[0] += aux;
		ans[2] += aux;
	}
	else if(uniC == 1){
		ans[0] += aux;
		ans[1] += aux;
	}
	else{
		ans[1] += aux;
		ans[2] += aux;
	}

	if(c - (aux * 2) > 0)
		can = false;
	else{
		if(a == b and a >= 0){
			if(uniA == 0){
				if(uniB == 1)
					ans[0] += a;
				else
					ans[2] += a;
			}
			else if(uniA == 1){
				if(uniB == 0)
					ans[0] += a;
				else
					ans[1] += a;
			}
			else{
				if(uniB == 1)
					ans[1] += a;
				else
					ans[2] += a;
			}
		}
		else
			can = false;
	}

	if (can){
		for (int i = 0; i < 3; ++i)
		{
			cout << ans[i] << ' ';
		}
	}
	else
		cout << "Impossible";

	return 0;
}