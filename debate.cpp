/*F. Debate*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using Number = int;

int main(){

	Number personas;
	
	cin >> personas;
	
	vector <Number> Alice;
	vector <Number> Bob;
	vector <Number> ninguno;
	
	Number cod, influencia;

	Number influTot = 0;
	Number totPers = 0;
	Number totAlice = 0;
	Number totBob = 0;

	for (int i = 0; i < personas; ++i)
	{
		cin>>cod>>influencia;
		
		if(cod == 11){
			influTot += influencia;
			totPers++;
			totAlice++;
			totBob++;
		}
		else if(cod == 10){
			Alice.push_back(influencia);
		}
		else if(cod == 1){
			Bob.push_back(influencia);
		}
		else{
			ninguno.push_back(influencia);
		}
	}

	sort(Alice.begin(), Alice.end(), greater <Number>());
	sort(Bob.begin(), Bob.end(), greater <Number>());
	sort(ninguno.begin(), ninguno.end(), greater <Number>());

	Number limA = Alice.size();
	Number limB = Bob.size();
	Number limCeros = ninguno.size();

	Number menor;
	Number i, j, k;
	Number bandera = 0;

	if(limA < limB){
		menor = limA;
		bandera = 1;

	}
	else{
	
		menor = limB;
		bandera = 2;
	}


	for (i = 0; i < menor; ++i)
	{
		influTot += Alice[i] + Bob[i];
		totPers +=2;
		totAlice++;
		totBob++;
	}


	if(bandera == 1){

		if(ninguno.size() == 0){
			for (k = i; k < limB; ++k)
			{
				if((2*totAlice >= totPers+1) and (2*totBob+1 >= totPers+1)){
						totPers++;
						totBob++;
						influTot += Bob[k];
				}
			}
		}
		else{

			for ( j = 0; j < limCeros; ++j)
			{
				if((2*totAlice >= totPers+1) and (2*totBob >= totPers+1)){
					if(i < limB){
						 if(Bob[i] >= ninguno[j]){
						 	influTot += Bob[i];
						 	totPers++;
						 	totBob++;
						 	i++;
						 	j--;
						 }
						 else{
						 	influTot += ninguno[j];
							totPers++;
						 }
					}
					else{
						influTot += ninguno[j];
						totPers++;
					}
				}
				
			}
		}


		/*para cuando termina los elementos de 00 pero aun hay en B*/

		for (j = i; j <limB ; ++j)
		{
			if((2*totAlice >= totPers+1) and (2*totBob+1 >= totPers+1)){
				totBob++;
				totPers++;
				influTot += Bob[j];
			}
		}

	}

	if(bandera == 2){


		if(ninguno.size() == 0){
			for (k = i; k < limA; ++k)
			{
				if((2*totAlice+1 >= totPers+1) and (2*totBob >= totPers+1)){
						totPers++;
						totAlice++;
						influTot += Alice[k];
				}
			}
		}
		else{

			for ( j = 0; j < limCeros; ++j)
			{
				if((2*totAlice >= totPers+1) and (2*totBob >= totPers+1)){
					if(i < limA){
						 if(Alice[i] >= ninguno[j]){
						 	influTot += Alice[i];
						 	totPers++;
						 	totAlice++;
						 	i++;
						 	j--;
						 }
						 else{
						 	influTot += ninguno[j];
							totPers++;
						 }
					}
					else{
						influTot += ninguno[j];
						totPers++;
					}
				}
				
			}


			
		}

		for (j = i; j <limB ; ++j)
		{
			if((2*totAlice+1 >= totPers+1) and (2*totBob >= totPers+1)){
				totAlice++;
				totPers++;
				influTot += Alice[j];
			}
		}

	}

	cout<<influTot<<'\n';

	return 0;
}