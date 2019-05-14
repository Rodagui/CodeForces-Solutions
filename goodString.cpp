/*C. Good String*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam;
	int pos = 1;
	int cambios = 0;
	string  cad;

	cin >> tam >> cad;

	vector <char> answer;

	for (int i = 0; i < tam - 1; ++i)
	{
		if(cad[i] == cad[i+1] and (pos % 2 == 1) ){
			cambios++;
			continue;
		}

		answer.push_back(cad[i]);
		pos++;

	}

	if(cad[tam - 1] != cad[tam - 2])
		answer.push_back(cad[tam-1]);
	else
		cambios++;

	if(answer.size() % 2 == 1){
		cambios++;
		answer.pop_back();
	}

	cout << cambios <<'\n';
	for (int i = 0; i < answer.size(); ++i)
	{
		cout<< answer[i];
	}

	return 0;
}