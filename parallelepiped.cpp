/*A. Parallelepiped*/
/*Dada las áreas de un paralelepipedo rectangular 
saca las medidas de sus lados (a, b y c)*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int area1, area2, area3;
	int total = 0;
	int a, b, c;

	cin >> area1 >> area2 >> area3;

	a = sqrt((area1 * area3) / area2);

	c = area3 / a;

	b = area2 / c;

	total = (a*4) + (b * 4) + (c * 4);

	cout << total <<'\n';

	return 0;
}