/*A. A and B and Chess*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string linea;

	int black = 0;
	int white = 0;

	for (int i = 0; i < 8; ++i)
	{
		cin >> linea;

		for (int j = 0; j < 8; ++j)
		{
			if(linea[j] == 'Q')
				white += 9;
			if(linea[j] == 'R')
				white += 5;
			if(linea[j] == 'B' or linea[j] == 'N')
				white += 3;
			if(linea[j] == 'P')
				white += 1;

			if(linea[j] == 'q')
				black += 9;
			if(linea[j] == 'r')
				black += 5;
			if(linea[j] == 'b' or linea[j] == 'n')
				black += 3;
			if(linea[j] == 'p')
				black += 1;
		}
	}

	if(black > white)
		cout << "Black";
	else if(white > black)
		cout << "White";
	else
		cout << "Draw";

	return 0;
}