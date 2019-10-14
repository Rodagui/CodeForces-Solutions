/*B. Sereja and Suffixes*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	set <int> unicos;

	int tam, queries, q;
	
	cin >> tam >> queries;

	vector <int> arr(tam);
	vector <int> freq(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];
	

	for (int i = tam - 1; i >= 0; --i)
	{
		unicos.insert(arr[i]);
		freq[i] = unicos.size();
	}

	for (int i = 0; i < queries; ++i)
	{
		cin >> q;

		cout << freq[q - 1] << '\n';
	}

	return 0;
}