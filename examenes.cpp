/*Problema E – Exámenes*/

#include <bits/stdc++.h>

#define EPS 1e-12

using namespace std;

int main(){
	
	double T1, T2, r1, r2, ans1, ans2;

	cin >> T1 >> T2 >> r1 >> r2;

	ans1 = (100.0f * r1 / T1) + (100.0f * r2 / T2);
	ans1 /= 2.0f;

	ans2 = 100.0f * (r1 + r2) / (T1 + T2);

	if(fabs(ans1 - ans2) < EPS)
		cout << "C";
	else if(ans1 > ans2)
		cout << "A";
	else
		cout << "B";

	return 0;
}