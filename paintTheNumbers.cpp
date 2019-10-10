/*1209A - Paint the Numbers*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam, pos, tot = 0;

	vector <int> freq(101);

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> pos;
		freq[pos] = 1;
	}

	if(freq[1] == 1){
		tot = 1;
	}
	else{

		for (int i = 1; i < 101; ++i)
		{
			if(freq[i] == 1){
				
				for (int j = i; j < 101 ; j += i)
					freq[j] = 0;

				tot++;	
			}
		}
	}

	cout << tot;

	return 0;
}