/*A. DZY Loves Chessboard*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	int row, col;
	cin>>row>>col;
	
	cin.ignore();

	char arr[row][col];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col ; ++j)
		{
			cin>>arr[i][j];
			if(arr[i][j] == '.'){
				if((i % 2 == 0 and j % 2 == 0) or (i % 2 == 1 and j % 2 == 1))
					arr[i][j] ='B';
				else
					arr[i][j] = 'W';
			}
			cout<<arr[i][j];


		}
		cout<<'\n';
	}

	return 0;
}