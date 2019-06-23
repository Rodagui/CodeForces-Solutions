/*B. Airport*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();


	int persons, planes;
	int minimo = 0;
	int ini = 0;
	int maximo = 0;
	int valor = 0;

	cin >> persons >> planes;

	vector <int> seats(planes);
	vector <int> copia(planes);

	for (int i = 0; i < planes ; ++i)
		cin >> seats[i];

	copia = seats;

	sort(seats.begin(), seats.end());
	sort(copia.begin(), copia.end(), greater<int>());


	for (int i = 0; i < persons; ++i){
		minimo += seats[ini];
		seats[ini]--;
		if(seats[ini] == 0)
			ini++;
	}

	/*------------MAXIMO---------------*/
	

	while(persons > 0){

		valor = copia[0];

		for (int i = 0; i < planes; ++i){
			
			if(copia[i] == valor){
				maximo+= copia[i];
				persons--;
				copia[i]--;
			}
			else{
				i = -1;
				valor = copia[0];
			}

			if(persons == 0)
				break;
		}
	}

	cout << maximo << ' '<< minimo << '\n';

	return 0;
}