/*B. Little Pigs and Wolves*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int row, column;
	int tot = 0;
	vector < pair <int, pair <int, int> > > wolfs;

	cin >> row >> column;

	char arr[row][column];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cin >> arr[i][j];
			if(arr[i][j] == 'W')
				wolfs.push_back(make_pair(0, make_pair(i,j)));
			
		}
	}

	int c, r, aux;

	for (int i = 0; i < wolfs.size(); ++i)
	{
		aux = 0;
		r = wolfs[i].second.first;
		c = wolfs[i].second.second;

		if(r - 1 >= 0)
			if(arr[r - 1][c] == 'P')
				aux++;
			
		if(c - 1 >= 0 )
			if(arr[r][c - 1] == 'P')
				aux++;

		if(c + 1< column)
			if(arr[r][c+1] == 'P')
				aux++;

		if(r + 1 < row)
			if(arr[r + 1][c] == 'P')
				aux++;

		wolfs[i].first = aux;

		//cout << wolfs[i].first << ' ' << wolfs[i].second.first << ' ' << wolfs[i].second.second << '\n';
	}

	sort(wolfs.begin(), wolfs.end());


	for (int i = 0; i < wolfs.size(); ++i)
	{
		r = wolfs[i].second.first;
		c = wolfs[i].second.second;

		//cout << wolfs[i].first << ' ' << wolfs[i].second.first << ' ' << wolfs[i].second.second << '\n';

		if(arr[r][c] == 'W'){

			if(r - 1 >= 0)
				if(arr[r - 1][c] == 'P'){
					arr[r - 1][c] = '.';
					tot++;
					arr[r][c] = '.';
					continue;
				}
					
				
			 if(c - 1 >= 0 )
				if(arr[r][c - 1] == 'P'){
					arr[r][c - 1] = '.';
					tot++;
					arr[r][c] = '.';
					continue;
				}
					

			 if(c + 1 < column)
				if(arr[r][c+1] == 'P'){
					arr[r][c+1] = '.';
					tot++;
					arr[r][c] = '.';
					continue;
				}
		

			 if(r + 1 < row)
				if(arr[r + 1][c] == 'P'){
					arr[r + 1][c] = '.';
					tot++;
					arr[r][c] = '.';
					continue;
				}

		}
	}

	cout << tot;

	return 0;
}