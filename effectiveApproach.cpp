/*B. Effective Approach*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map <int, int> position;
	int pos = 1;
	int element;
	int queries;
	int tam;
	int needVas;
	int needPet;
	long long vasya = 0;
	long long petya = 0;

	cin >> tam;

	for (int i = 0; i < tam; ++i){
		cin >> element;
		position[element] = pos;
		pos++;
	}

	cin >> queries;

	for (int i = 0; i < queries; ++i){
		
		cin >> element;

		needVas = position[element];
		needPet = tam - needVas + 1;
		vasya += needVas;
		petya += needPet;
	}

	cout << vasya << ' ' << petya <<'\n';

	return 0;
}