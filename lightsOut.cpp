/*A. Lights Out*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	int arr[3][3];
	int aux[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> arr[i][j];
			aux[i][j] = 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if( arr[i][j] % 2 == 1){

				if (aux[i][j] == 0)
					aux[i][j] = 1;
				else
					aux[i][j] = 0;
				
				if(i - 1 >= 0){

					if(aux[i-1][j] == 0)
						aux[i-1][j] = 1;
					else
						aux[i-1][j] = 0;
				}

				if(j - 1 >= 0){
					if(aux[i][j-1] == 0)
						aux[i][j-1] = 1;
					else
						aux[i][j-1] = 0;
				}

				if( j + 1 < 3){

					if(aux[i][j + 1] == 0)
						aux[i][j + 1] = 1;
					else
						aux[i][j + 1] = 0;
				}

				if(i + 1 < 3){

					if(aux[i + 1][j] == 0)
						aux[i + 1][j] = 1;
					else
						aux[i + 1][j] = 0;
				}

			}
		}
	}


	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << aux[i][j];  
		}

	cout<<'\n';
	}

	return 0;
}