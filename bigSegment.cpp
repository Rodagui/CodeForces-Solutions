/*B. Big Segment*/

#include <bits/stdc++.h>

using namespace std;

bool ordena(pair<int,int> a, pair<int,int> b);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	vector <pair <int, int> > rangos(n);
	vector <pair <int, int> > copia(n);

	for (int i = 0; i < n; ++i){
		cin >> rangos[i].first >> rangos[i].second;
		copia[i].first = rangos[i].first;
		copia[i].second = rangos[i].second;
	}

	sort(copia.begin(), copia.end(), ordena);

	int a, b;

	a = copia[0].first;
	b = copia[0].second;

	bool sihay = true;

	for (int i = 1; i < n; ++i){
		if(copia[i].second > b){
			sihay = false;
			break;
		}
	}

	if(sihay){

		for (int i = 0; i < n; ++i)
		{
			if(rangos[i].first == a and rangos[i].second == b){
				cout << i + 1 << '\n';
				break;
			}

		}

	}
	else
		cout << "-1\n";
	

	return 0;
}


bool ordena(pair<int,int> a, pair<int,int> b){
	if (a.first == b.first){
		return a.second > b.second;
	}
	return a.first < b.first;
}