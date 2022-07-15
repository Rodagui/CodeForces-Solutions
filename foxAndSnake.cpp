/*A. Fox And Snake*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int col, row;

	cin >> row >> col;

	int aux = 1;

	for (int i = 0; i < row; ++i)
	{
		
		if(i % 2 == 1){

			for (int j = 0; j < col ; ++j)
			{
				if(j == 0 and aux % 2 == 0){
					cout << "#";
				}
				else if(j == col - 1 and aux % 2 == 1){
					cout << "#";
				}
				else{
					cout << ".";	
				}
			}

			aux++;
		}
		else{

			for (int j = 0; j < col ; ++j)
			{
				cout << "#";
			}
		}
		
		cout << '\n';
	}
	return 0;
}