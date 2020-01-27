/*A. Playing with Dice*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int winFirst = 0;
	int winSecond = 0;
	int draw = 0;
	int a, b;

	cin >> a >> b;

	for (int i = 1; i < 7; ++i)
	{
		if( abs(a - i) > abs(b - i) )
			winSecond++;
		else if( abs(a - i) == abs(b - i))
			draw++;
		else 
			winFirst++;
	}

	cout << winFirst << ' ' << draw << ' ' << winSecond;

	return 0;
}