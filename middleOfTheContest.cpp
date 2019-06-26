/*A - Middle of the Contest */

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cad1, cad2;

	cin >> cad1 >> cad2;

	int hra1, hra2, min1, min2;

	hra1 = ((cad1[0] - '0') * 10);
	hra1 += ((cad1[1] - '0'));
	min1 = ((cad1[3] - '0') *10);
	min1 += (cad1[4] - '0');

	hra2 = ((cad2[0] - '0') * 10);
	hra2 += ((cad2[1] - '0'));
	min2 = ((cad2[3] - '0') *10);
	min2 += (cad2[4] - '0');

	int minutos = 0, horas = 0;

	if(hra1 == hra2){
		minutos = min2 - min1;
		minutos /= 2;

		min1 += minutos;

		if(hra1 < 10)
			cout <<  '0';

		cout << hra1 << ':';

		if(min1 < 10)
			cout << '0';
		cout << min1;
	}
	else{

		minutos = 60 - min1;
		minutos += min2;
		hra2--;

		minutos += ((hra2 - hra1) * 60);

		minutos /= 2;

		horas = minutos / 60;
		hra1 += horas;

		min1 += (minutos % 60);

		if(min1 >= 60){
			hra1++;
			min1 -= 60;
		}


		if(hra1 < 10)
			cout <<  '0';

		cout << hra1 << ':';

		if(min1 < 10)
			cout << '0';
		cout << min1;

	}


	return 0;
}