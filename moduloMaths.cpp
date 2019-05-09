/*F. Modulo maths*/

#include <bits/stdc++.h>

#define MAX 10007 

using namespace std;
using Number = unsigned long long;

bool noEsPrimo[MAX + 1];

void primalidad();

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;
	cin >> casos;

	primalidad();

	for (int i = 1; i <= casos; ++i)
	{
		Number n;
		cin >> n;

		cout << "Case #" << i << ": ";

		if (n == 1)
			cout << "1\n";
		else if (n == 2)
			cout << "0\n";
		else
		{
			if (noEsPrimo[n])
				cout << ((n - 1) % n * (n - 1) % n) % n << "\n";
			else
				cout << "1\n";

		}
	}

	return 0;
}

void primalidad(){
	noEsPrimo[0] = noEsPrimo[1] = true;

	for (Number i = 4; i <= MAX; i += 2)
		noEsPrimo[i] = true;

	for (Number i = 3; i <= MAX; i += 2)
	{
		if (not noEsPrimo[i])
		{
			for (Number j = i * i; j <= MAX; ++j)
				noEsPrimo[j] = true;
		}
	}

	return;
}