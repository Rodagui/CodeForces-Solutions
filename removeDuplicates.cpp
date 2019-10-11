/*A. Remove Duplicates*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam, aux;
	int dif = 0;
	int pos;

	cin >> tam;

	vector <int> nums(tam);
	vector <int> freq(1005);


	for (int i = 0; i < tam; ++i)
	{
		cin >> aux;
		nums[i] = aux;
		freq[aux]++;
	}

	for (int i = 0; i < 1005; ++i)
	{
		if(freq[i] != 0)
			dif++;
	}

	cout << dif << '\n';

	for (int i = 0; i < tam ; ++i)
	{
		pos = nums[i];
		if(freq[pos] > 1)
			freq[pos]--;
		else if(freq[pos] == 1)
			cout << pos << ' ';
	}
	
	return 0;
}
