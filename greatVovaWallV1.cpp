/*D1. Great Vova Wall (Version 1)*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;
	cin >> tam;

	vector <int> blocks(tam);
	vector<int> paridad;

	for(int i = 0; i < tam; ++i){
		cin >> blocks[i];
		blocks[i] = blocks[i] % 2;
	}
	

	for (int i = 0; i < tam; ++i)
	{
		if (paridad.empty() == true or paridad.back() != blocks[i])
			paridad.push_back(blocks[i]);
		else
			paridad.pop_back();
	}

	if(paridad.size() <= 1)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}