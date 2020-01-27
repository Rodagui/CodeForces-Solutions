/*B. Collecting Packages*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		int paquetes, x, y;
		int difX, difY;
		bool can = true;
		string ans = "";

		cin>> paquetes;

		vector <pair <int, int> > puntos;

		for (int i = 0; i < paquetes; ++i)
		{
			cin >> x >> y;
			puntos.push_back(make_pair(x, y));
		}

		sort(puntos.begin(), puntos.end());

		x = puntos[0].first;
		y = puntos[0].second;

		for (int i = 0; i < x; ++i)
			ans += 'R';

		for (int i = 0; i < y; ++i)
			ans += 'U';

		for (int i = 1; i < puntos.size(); ++i)
		{

			if(puntos[i].first >= x and puntos[i].second >= y){
				
				if(puntos[i].first > x )
					for (int j = 0; j < (puntos[i].first - x); ++j)
						ans += "R";
				

				if (puntos[i].second > y)
					for (int j = 0; j < (puntos[i].second - y); ++j)
						ans += "U";
				
			x = puntos[i].first;
			y = puntos[i].second;
				
			}
			else{
				can = false;
				break;
			}

			
		}

		if(can){
			cout << "YES\n";
			cout << ans << '\n';
		}
		else
			cout <<"NO\n";
	}

	
	return 0;
}