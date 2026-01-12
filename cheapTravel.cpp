/*A. Cheap Travel*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int travels, pack, priceIndv, pricePack;

	cin >> travels >> pack >> priceIndv >> pricePack;

	double aux;
	int ans;
	int faltan;
	int total;


	if((double)pricePack/(double)pack < (double) priceIndv){
		ans = travels / pack;
		faltan = travels - (ans * pack);
		total = ans * pricePack;

		/*si sigue siendo más barato pagar el paquete*/
		if(pricePack < priceIndv*faltan)
			total += pricePack;
		else
			total += (faltan * priceIndv);
	}
	else{
		total = travels * priceIndv;
	}

	cout << total;



	return 0;
}