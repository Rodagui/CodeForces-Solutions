/*A. Pashmak and Garden*/
#include <bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	int dist1, dist2;
	bool can = true;

	cin >> x1 >> y1 >> x2 >> y2;

	if(x1 == x2){
		dist1 = abs(y1-y2);
		x3 = x1 + dist1;
		y3 = y1;
		x4 = x3;
		y4 = y2; 

	}
	else if(y1 == y2){
		dist1 = abs(x1 - x2);
		x3 = x1;
		y3 = y1 + dist1;
		x4 = x2;
		y4 = y3;

	}
	else if(x1 != x2 and y1 != y2){
		dist1 = abs(x2 - x1);
		dist2 = abs(y2 - y1);

		if(dist1 != dist2)
			can = false;
		else{
			x3 = x2;
			y3 = y1;
			x4 = x1;
			y4 = y2;
		}
	}

	if(can)
		cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;
	else
		cout << "-1";



	return 0;
}