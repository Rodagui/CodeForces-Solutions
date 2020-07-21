/*A. Next Round*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int persons;
	int ans = 0;
	int score;
	int pos;

	cin >> persons >> pos;
	pos--;

	vector <int> place(persons);

	for (int i = 0; i < persons; ++i)
		cin >> place[i];

	score = place[pos];

	for (int i = 0; i < persons; ++i)
	{
		if(place[i] >= score and place[i] > 0)
			ans++;
	}

	cout << ans;

	return 0;
}