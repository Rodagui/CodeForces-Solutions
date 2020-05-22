/*B - Letter*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int rows;
	int col;

	cin >> rows >> col;

	int left = -1;
	int right = -1;
	int up = -1;
	int down = -1;

	vector <vector <char> > mat(rows, vector <char> (col));

	for (int i = 0; i < rows; ++i)
	{

		for (int j = 0; j < col; ++j)
		{
			cin >> mat[i][j];
			if(mat[i][j] == '*'){
				if(left == -1){
					left = j;
					right = j;
					up = i;
					down = i;
				}
				else{
					left = min(left, j);
					right = max(right, j);
					up = min(i, up);
					down = max(down, i);
				}
			}
		}

	}

	for (int i = up; i <= down; ++i)
	{

		for (int j = left; j <= right; ++j)
		{
			cout << mat[i][j];
		}
		cout << '\n';

	}


	return 0;
}