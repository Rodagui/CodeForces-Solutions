/*A. IQ Test*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	char matriz[4][4];

	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j)
			cin >> matriz[i][j];

	
	bool can = false;
	int negro = 0, blanco = 0;

	for (int i = 0; i < 4; ++i){

		for (int j = 0; j < 4; ++j){
			
			/*----- cuadro 1 ------*/
			if( matriz[0][0] == '#' )
				negro++;
			else
				blanco++;

			if( matriz[0][1] == '#' )
				negro++;
			else
				blanco++;

			if( matriz[1][0] == '#' )
				negro++;
			else
				blanco++;

			if( matriz[1][1] == '#' )
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

			/*----- cuadro 2 ------*/
			if( matriz[0][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[0][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][1] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}



			/*----- cuadro 3 ------*/
			if( matriz[0][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[0][3] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][3] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}


			/*----- cuadro 4 ------*/
			if( matriz[1][0] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][0] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][1] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}


			/*----- cuadro 5 ------*/
			if( matriz[1][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][2] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

			/*----- cuadro 6 ------*/
			if( matriz[1][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[1][3] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][3] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

			/*----- cuadro 7 ------*/
			if( matriz[2][0] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][0] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][1] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

			/*----- cuadro 8 ------*/
			if( matriz[2][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][1] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][2] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

			/*----- cuadro 9 ------*/
			if( matriz[2][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[2][3] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][2] == '#')
				negro++;
			else
				blanco++;

			if( matriz[3][3] == '#')
				negro++;
			else
				blanco++;

			if(blanco >= 3 or negro >= 3){
				can = true;
				break;
			}
			else{
				blanco = 0;
				negro = 0;
			}

		}

		if(can)
			break;
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}