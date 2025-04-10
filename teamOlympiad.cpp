/*A. Team Olympiad*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int childs;
	int one = 0;
	int two = 0;
	int three = 0;

	cin >> childs;

	vector <int> subjects(childs);

	for (int i = 0; i < childs; ++i)
	{
		cin >> subjects[i];
		if(subjects[i] == 1)
			one++;
		if(subjects[i] == 2)
			two++;
		if(subjects[i] == 3)
			three++;
		
	}

	int teams = 0;

	if(one <= two and one <= three)
		teams = one;

	if(two <= one and two <= three)
		teams = two;

	if(three <= one and three <= two)
		teams = three;

	if(teams == 0)
		cout << "0";
	else{

		cout << teams << '\n';

		vector <vector <int> > ans(teams, vector<int>(3, 0));

		int aux = 0;
		int indice = 0;
	
		for (int i = 0; i < childs; ++i)
		{
			if(subjects[i] == 1){
				ans[indice][0] = i+1;
				indice++;
				aux++;
			}

			if(aux == teams)
				break;
		}

		aux = 0;
		indice = 0;
	
		for (int i = 0; i < childs; ++i)
		{
			if(subjects[i] == 2){
				ans[indice][1] = i+1;
				indice++;
				aux++;
			}

			if(aux == teams)
				break;
		}

		aux = 0;
		indice = 0;
	
		for (int i = 0; i < childs; ++i)
		{
			if(subjects[i] == 3){
				ans[indice][2] = i+1;
				indice++;
				aux++;
			}

			if(aux == teams)
				break;
		}
		


		for (int i = 0; i < teams; ++i)
			cout << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2] << '\n';
		

	}



	return 0;
}