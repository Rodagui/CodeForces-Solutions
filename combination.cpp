/*A - Combination*/

#include <bits/stdc++.h>
using namespace std;
using Long = long long;

inline bool comparador(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second > b.second;

	return a.first > b.first;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector <pair <Long, Long> > cards(n);

	for (int i = 0; i < n ; ++i)
		cin >> cards[i].second >> cards[i].first;
	

	sort(cards.begin(), cards.end(), comparador);

	int cont = 1;
	Long puntos = 0ll;

	for (int i = 0; i < n ; ++i){
		puntos += cards[i].second;
		cont--;
		cont += cards[i].first;

		if(cont == 0)
			break; 
	
	}

	cout << puntos;


	return 0;
}