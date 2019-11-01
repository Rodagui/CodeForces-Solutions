/*C. The Child and Toy*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int pieces, ropes;

	cin >> pieces >> ropes;

	vector <int> energy(pieces);
	map <int, vector <int> > toy;

	for (int i = 0; i < pieces; ++i){
		cin >> energy[i];
	}

	int a, b;

	for (int i = 0; i < ropes; ++i)
	{
		cin >> a >> b;

		if(a < b)
				toy[a].push_back(b);
		else
			toy[b].push_back(a);
	}
	
	map <int, vector <int> >::iterator it;
	int tot = 0;

	for (it = toy.begin(); it != toy.end() ; ++it)
	{
		int tam = it -> second.size();
		int op1, op2;
		
		op1 = it -> first;
		op1--;

		op1 = energy[op1];

		//cout << it -> first << ' ';
		
		for (int i = 0; i < tam ; ++i)
		{
			//cout << it -> second[i];
			op2 = it -> second[i];
			op2--;
			op2 = energy[op2];

			if(op1 <= op2)
				tot+= op1;
			else
				tot+= op2;
		}

		//cout << '\n';
	}


	cout << tot;

	return 0;
}