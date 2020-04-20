/*F. Alternating signs*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

vector <Long> aux;
vector <Long> memo;

Long maximaSuma(int pos)
{
	if (pos < 0)
		return 0;

	if (pos == 0)
		return max(0ll, aux[pos]);

	if (memo[pos] == LLONG_MAX)
	{
		Long suma;

		suma = max(0ll, maximaSuma(pos - 2));
		suma = max(suma, aux[pos] + maximaSuma(pos - 3));
		suma = max(suma, aux[pos] + aux[pos - 1] + maximaSuma(pos - 2));
		
		memo[pos] = suma;
	}


	return memo[pos];
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	bool posi = false;
	bool nega = false;
	Long maxPos = -1;
	Long maxNeg = -LLONG_MAX;
	int tam;

	cin >> tam;
	vector <Long> arr(tam);


	for (int i = 0; i < tam ; ++i)
	{
		cin >> arr[i];

		if(arr[i] > 0){
			posi = true;
			maxPos = max(arr[i], maxPos);
		}

		if(arr[i] < 0){
			maxNeg = max(arr[i], maxNeg);
			nega = true;
		}
	}

	if(posi == false){
		cout << "0"; 
	}
	else if(posi == true and nega == false){
		cout << maxPos;
	}
	else{

		int j;

		for (int i = 0; i < tam; ++i)
		{
			if(arr[i] > 0){
				maxPos = arr[i];
				j = i;
				posi = true;
				break;
			}
		}

		for (int i = j + 1; i < tam; ++i)
		{
			if(posi){
				
				if(arr[i] > 0){
					maxPos = max(maxPos, arr[i]);
				}
				else{
					posi = false;
					aux.push_back(maxPos);
					maxPos = arr[i];
				}
			}
			else{

				if(arr[i] < 0){
					maxPos = max(maxPos, arr[i]);
				}
				else{
					posi = true;
					aux.push_back(maxPos);
					maxPos = arr[i];
				}
			}
		}

		
		if(maxPos > 0){
			aux.push_back(maxPos);
		}

		tam = aux.size();

		memo = vector <Long>(tam + 1, LLONG_MAX);
		cout << maximaSuma(tam - 1);
	}

	return 0;
}