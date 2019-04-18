/*B. Sail*/

#include <iostream>

using namespace std;


int main(){


	int direcciones;
	long long xo, yo, xf, yf, tot = 0;
	long long totX = 0, totY = 0;

	cin>> direcciones >> xo >> yo >> xf >> yf;

	string cadena;

	cin.ignore();

	cin >> cadena;

	char vrtcl, hztal;

	if(xo > xf)
		hztal = 'W';
	else
		hztal = 'E';

	if(yo > yf)
		vrtcl = 'S';
	else 
		vrtcl = 'N';

	totX = abs(xo - xf);
	totY = abs(yo - yf);

	for (int i = 0; i < cadena.size(); ++i){
		if(totX <= 0 and totY <= 0)
			break;

		if(cadena[i] == hztal) 
			totX--;
		
		if(cadena[i] == vrtcl)
			totY--;

		tot++;
	}

	if(totX > 0 or totY > 0)
		cout<<"-1\n";
	else
		cout<< tot <<'\n';


	return 0;
}