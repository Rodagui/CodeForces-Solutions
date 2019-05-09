/*Inscribed Figures*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int figuras;

	cin >> figuras;

	vector <int> figs(figuras);

	for (int i = 0; i < figuras; ++i)
		cin >> figs[i];

	long total = 0;
	bool infinita = false;

	for (int i = figuras - 1; i > 0 ; --i)
	{
		if(figs[i] == 2 and figs[i-1] == 3){
			infinita = true;
			break;
		}
		
		if(figs[i] == 3 and figs[i-1] == 2){
			infinita = true;
			break;
		}

		if(figs[i] == 1 and figs[i-1] == 3)
			total += 4;


		if(figs[i] == 3 and figs[i-1] == 1)
			total += 4;

		if(figs[i] == 2 and figs[i-1] == 1)
			total+= 3;

		if(figs[i] == 1 and figs[i-1] == 2)
			total += 3;		
	}

	for (int i = 0; i < figuras - 2; ++i)
	{
		if (figs[i] == 3 and figs[i + 1] == 1 and figs[i + 2] == 2)
			--total;
	}

	if(infinita)
		cout<<"Infinite\n";
	else{
		cout << "Finite\n";
		cout << total <<'\n';
	}


	return 0;
}