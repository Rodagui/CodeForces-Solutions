/*A. I Wanna Be the Guy*/
#include <bits/stdc++.h>

using namespace std;

int main (){
	
	ios_base::sync_with_stdio(0);
	
	cin.tie(0);
	cout.tie(0);

	set <int> Levels;
	int littleX;
	int littleY;
	int totalLevels;
	int aux;


	cin >> totalLevels;
	cin >> littleX;

	for (int i = 0; i < littleX; ++i)
	{
		cin >> aux;	
		Levels.insert(aux);
	}

	cin >> littleY;

	for (int i = 0; i < littleY; ++i)
	{
		cin >> aux;
		Levels.insert(aux);
	}

	if(Levels.size() == totalLevels){
		cout << "I become the guy.";
	}
	else
		cout << "Oh, my keyboard!";


	return 0;
}