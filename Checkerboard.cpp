/*D. Checkerboard*/

#include <bits/stdc++.h>

using namespace std;
using Number = long long;
int main(){

	Number lados, xo, yo, xf, yf;
	Number equis, ye;

	cin>>lados >> xo>> yo>> xf >> yf;
	if(xo == xf and yo == yf){
		lados = lados / 2;
	}
	else{
		
		equis = abs(xo- xf);
		ye = abs(yo - yf);

		lados -= equis + ye -1;

		if(lados > 0)
			lados = ceil(float(lados) / 2.0);
		else
			lados = 0;
	}


	cout<<lados<<'\n';

	return 0;

}