/*C. Array Reconstructing*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	scanf("%d", &casos);

	int tam, mod;

	while(casos--){
		
		scanf("%d %d", &tam, &mod);

		vector <int> elements(tam);
		int indice, band = 0;

		for (int i = 0; i < tam; ++i)
		{
			scanf("%d", &elements[i] );
			if (elements[i] != -1 and band == 0){
				band = 1;
				indice = i;
			}
		}

		if(indice == 0){

			for (int i = 1; i < tam; ++i)
			{
				elements[i] = ( elements[i - 1] + 1 ) % mod;
			}
		}
		else{

			for (int i = indice + 1; i < tam; ++i)
			{
				elements[i] = (elements[i-1] + 1 ) % mod;
			}

			for (int i = indice - 1; i >= 0 ; --i)
			{
				elements[i] = elements[i+1] - 1;
				if ( elements[i] == -1 )
					elements[i] = mod - 1;
			}

		}

		for (int i = 0; i < tam; ++i)
			{
				if(i > 0)
					printf(" ");

				printf("%d ", elements[i] );
			}

		printf("\n");

	}

	return 0;

}