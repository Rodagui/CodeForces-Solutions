/*A. Cupboards*/


#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int cupboards;
	int total = 0;

	cin >> cupboards;

	int leftOpen = 0;
	int rightOpen = 0;
	int leftClose = 0;
	int rightClose = 0;

	int a = 0, b = 0;
	for (int i = 0; i < cupboards; ++i){
		cin >> a >> b;

		if(a == 0)
			leftClose++;
		else
			leftOpen++;

		if(b == 0)
			rightClose++;
		else
			rightOpen++;
	}

	if(leftOpen < leftClose)
		total += leftOpen;
	else
		total += leftClose;


	if(rightOpen < rightClose)
		total += rightOpen;
	else
		total += rightClose;


	cout << total << '\n';


	return 0;
}