/*A. Supercentral Point*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int puntos;
	int central = 0;

	cin >> puntos;

	vector <pair <int, int> > coordenadas(puntos);

	for (int i = 0; i < puntos; ++i)
		cin >> coordenadas[i].first >> coordenadas[i].second;
	

	/*for (int i = 0; i < puntos; ++i)
		cout<<coordenadas[i].first<<' '<<coordenadas[i].second<<'\n';*/

	bool up = false;
	bool down = false;
	bool left = false;
	bool right = false;

	int xo, yo, xf, yf;
	for (int i = 0; i < puntos; ++i){
		
		xo = coordenadas[i].first;
		yo = coordenadas[i].second;

		for (int j = 0; j < puntos; ++j){
			xf = coordenadas[j].first;
			yf = coordenadas[j].second;

			if(xo == xf and yo < yf)
				up = true;

			if(xo == xf and yo > yf)
				down = true;

			if(xo > xf and yo == yf)
				right = true;

			if(xo < xf and yo == yf)
				left = true;
		}

		if(up and down and left and right)
			central++;

		up = false;
		down = false;
		right = false;
		left = false;

	}

	cout << central <<'\n';

	return 0;
}