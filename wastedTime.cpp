#include <bits/stdc++.h>

using namespace std;
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int puntos;
	double firmas;
	double x, y;
	double X, Y;
	double ans = 0.0;
	double antX, antY;

	cin >> puntos >> firmas;

	for (int i = 0; i < puntos; ++i)
	{
		cin >> x >> y;

		if(i == 0){
			antX = x;
			antY = y;
		}
		else{
			X = antX - x;
			Y = antY - y;
			ans += sqrt( X * X + Y * Y);
			antX = x;
			antY = y;
		}
	}

	ans *= firmas;
	ans /= 50.0f;

	cout << fixed << setprecision(6) << ans;


	return 0;
}