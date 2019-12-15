/*A. Marks*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int alum, materias;

	cin >> alum >> materias;

	vector <int> masAltas(materias, 0);
	vector < vector <int> > notas(alum);

	string cali;
	int num;

	for (int i = 0; i < alum ; ++i)
	{
		cin >> cali;

		for (int j = 0; j < materias; ++j)
		{
			num = cali[j] - '0';
			notas[i].push_back(num);

			if(notas[i][j] > masAltas[j])
				masAltas[j] = notas[i][j];
		}
	}

	int ans = 0;

	for (int i = 0; i < alum; ++i)
	{
		for (int j = 0; j < materias; ++j)
		{
		
			if(notas[i][j] == masAltas[j]){
				ans++;
				break;
			}
			
		}

	}


	cout << ans;

	return 0;
}