/*B. knights*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int rows, cols, knights;

	cin>>rows>>cols>>knights;

	int arr[rows][cols];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = 0;
		}
	}

	int x, y;

	for (int k = 0; k < knights; ++k)
	{
		cin>>x>>y;
		arr[x-1][y-1] = 1;
	}

	int tot = 0; 

	if(rows == 1 and cols == 1){
		if(arr[0][0] == 0)
			tot = 1;
	}
	else if(rows == 1){
		
		if(arr[0][0] == 0 and arr[0][cols - 1] ==  0)
			tot = 2;

		if(arr[0][0] == 1 and arr[0][cols - 1] ==  0)
			tot = 1;

		if(arr[0][0] == 0 and arr[0][cols - 1] ==  1)
			tot = 1;

		if(arr[0][0] == 1 and arr[0][cols - 1] ==  1)
			tot = 0;
	}

	else if(cols == 1){

		if(arr[0][0] == 0 and arr[rows - 1][0] ==  0)
			tot = 2;

		if(arr[0][0] == 1 and arr[rows - 1][0] ==  0)
			tot = 1;

		if(arr[0][0] == 0 and arr[rows - 1][0] ==  1)
			tot = 1;

		if(arr[0][0] == 1 and arr[rows - 1][0] ==  1)
			tot = 0;
		
	}
	else{


		tot = 4;

		if(arr[0][0] == 1)
			tot--;

		if(arr[0][cols - 1] == 1)
			tot--;

		if(arr[rows - 1][0] == 1)
			tot--;

		if(arr[rows-1][cols-1] == 1)
			tot--;


	}

		cout<<tot<<'\n';
	return 0;
}