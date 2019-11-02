/*B. Road Construction*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cities, noConstruct;
	int a, b;
	set <int> no;

	cin >> cities >> noConstruct;


	for (int i = 0; i < noConstruct; ++i)
	{
		cin >> a >> b;
		no.insert(a);
		no.insert(b);
	}

	for (int i = 1; i <= cities ; ++i)
	{
		if(no.count(i) == 0){
			a = i;
			break;
		}
	}

	cout << cities - 1 << '\n';

	for (int i = 1; i <= cities ; ++i)
	{
		if(i != a)
			cout << i << ' ' << a << '\n';
	}




	return 0;
}
