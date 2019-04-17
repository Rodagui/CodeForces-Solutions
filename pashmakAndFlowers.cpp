/*B. Pashmak and Flowers*/

#include <iostream>

using namespace std;

int main(){	

	int flowers;

	cin>>flowers;

	unsigned long long maximo, min, num, cantMin = 0, cantMax = 0, tot = 0;

	maximo = 0;
	min = 1000000001;

	for (int i = 0; i < flowers; ++i)
	{
		cin>>num;

		if(num > maximo){
			cantMax = 1;
			maximo = num;
		}
		else if(num == maximo){
			cantMax++;
		}
		if(num < min){
			min = num;
			cantMin = 1;
		}
		else if( num == min)
			cantMin++;
		
	}

	if(min == maximo){
		tot = (cantMax * (cantMax - 1)) / 2;
	}
	else{
		tot = cantMin * cantMax;
	}

	cout<<maximo - min<<' '<<tot<<'\n';

	return 0;
}