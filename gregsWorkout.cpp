/*A. Greg's Workout*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	int exercises;
	int aux;
	int chest = 0;
	int biceps = 0;
	int back = 0;

	cin >> exercises;


	for (int i = 0; i < exercises; ++i)
	{
		cin >> aux;	
		if(i % 3 == 0)
			chest += aux;
		else if(i % 3 == 1)
			biceps += aux;
		else
			back += aux;
	}

	if(chest > biceps and chest > back)
		cout << "chest";
	
	if(biceps > chest and biceps >back)
		cout << "biceps";
	
	if(back > chest and back > biceps)
		cout << "back";

	return 0;
}
