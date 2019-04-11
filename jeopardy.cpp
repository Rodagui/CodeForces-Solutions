/*E. Jeopardy*/

#include <iostream>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    
    cin.tie(0);
	
	int tam;
	cin>>tam;

	int arr[tam][tam];


	int maximo = -1;

	for (int i = 0; i < tam; ++i)
	{
	    int minimo = 200;
	    
		for (int j = 0; j < tam ; ++j)
		{
			cin>> arr[i][j];
			if(arr[i][j] < minimo)
			    minimo = arr[i][j];
		}
		
		if(minimo > maximo)
		    maximo = minimo;

	}
	
	cout<<maximo<<'\n';

	return 0;
}