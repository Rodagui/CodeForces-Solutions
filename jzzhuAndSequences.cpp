#include <bits/stdc++.h>

using namespace std;
#define modulo 1000000007

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long x, y, n, ans;

	cin >> x >> y >> n;

	vector <long long> terms(6);

	terms[0] = x;
	terms[1] = y;

	for (int i = 2; i < 6; ++i)
		terms[i] = (terms[i-1] - terms[i-2]);

	int indice = (n-1) % 6;

	cout << ((terms[indice] % modulo) + modulo ) % modulo<< '\n';	

	return 0;
}