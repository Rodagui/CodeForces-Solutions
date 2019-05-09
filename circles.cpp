/*A. Circles*/
#include <bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;
	cin>>casos;

	int a, b, dist;
	double areaCuadro, areaCirc, areaMinisC, gajitos;

	while(casos--){

		cin>>a>>b>>dist;


		areaCirc = (pi * (double)dist * (double)dist) / 4.0;

		areaCuadro = ((double)dist * (double)dist) / 2.0;

		gajitos = areaCirc - areaCuadro;
		gajitos /= 4.0;

		areaMinisC = (pi * (double)dist * (double)dist * 2.0) / 16.0;
		areaMinisC /= 2.0;

		areaMinisC -= gajitos;
		areaMinisC *= 4.0;

		cout << fixed << setprecision(7) << areaMinisC<< "\n";
	}
	return 0;
}