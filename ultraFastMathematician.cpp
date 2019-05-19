/*A. Ultra-Fast Mathematician*/

#include <bits/stdc++.h>

using namespace std;

int main(){	

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string linea1, linea2;

	cin >> linea1 >> linea2;

	for (int i = 0; i < linea1.size(); ++i)
	{
		if(linea1[i] == linea2[i])
			cout << '0';
		else
			cout << '1';
	}

	return 0;
}