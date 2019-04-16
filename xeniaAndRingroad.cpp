/*B. Xenia and Ringroad*/

#include <iostream>
#include <vector>

using namespace std;

using Number = long long;

int main(){
	
	Number posAct, posFinal, total = 0;
	int elem, casas;

	cin>>casas>>elem;

	posAct = 1;

	for (int i = 0; i < elem; ++i)
	{
		cin>>posFinal;

		if(posAct <= posFinal){
			total += posFinal - posAct;
		}
		else{
			total += casas - posAct;
			total += posFinal;
		}
		
			posAct = posFinal;
	}

	cout<<total<<'\n';

	return 0;
}