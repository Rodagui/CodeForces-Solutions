/*C. Friends and Gifts*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int friends;
	cin >> friends;

	vector <int> gifts(friends);
	set <int> have;
	set <int> disp;
	set <int> positions;
	vector <int> iguales;
	vector <int> demas;

	for (int i = 0; i < friends ; ++i)
	{
		cin >> gifts[i];

		if(gifts[i] != 0)
			have.insert(gifts[i]);
		else
			positions.insert(i + 1);
		
	}


	for (int i = 1; i <= friends ; ++i)
	{
		if(have.count(i) == 0)
			disp.insert(i);
	}
	
	set <int>:: iterator it;
	int num;
	int pos;

	for ( it = disp.begin(); it != disp.end() ; ++it)
	{
		num = *it;

		if(positions.count(num))
			iguales.push_back(num);
		else
			demas.push_back(num);

	}

	if(iguales.size() == 1){

		pos = iguales[0] - 1;
		num = demas.back();
		gifts[pos] = num;

		demas.pop_back();
		demas.push_back(iguales[0]);
	}
	else if(iguales.size() > 1){

		iguales.push_back(iguales[0]);

		for (int i = 0; i < iguales.size() - 1; ++i)
		{
			pos = iguales[i] - 1;
			num = iguales[i+1];
			gifts[pos] = num;
		}
	}


	for (int i = 0; i < friends; ++i)
	{
		if(gifts[i] == 0){
			gifts[i] = demas.back();
			demas.pop_back();
		}
	}

	for (int i = 0; i < friends; ++i)
		cout << gifts[i] << ' ';
	
	return 0;
}