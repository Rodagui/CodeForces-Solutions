/*B - Chores*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int a;
	int b;

	cin >> tam >> a >> b;

	vector <int> chores(tam);

	for (int i = 0; i < tam; ++i)
		cin >> chores[i];

	sort(chores.begin(), chores.end());

	cout << chores[b] - chores[b - 1];
	
	return 0;
}