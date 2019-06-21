/*A. Puzzles*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int minimo = 2000;
	int students;
	int puzzles;

	cin >> students >> puzzles;

	vector <int> pieces(puzzles);
	
	for (int i = 0; i < puzzles ; ++i)
		cin >> pieces[i];

	sort(pieces.begin(), pieces.end());


	int fin = puzzles - (students - 1);
	for (int i = 0; i < fin; ++i)	
		if((pieces[i+ students - 1] - pieces[i]) < minimo)
			minimo = pieces[i+ students - 1] - pieces[i];
	
	cout << minimo <<'\n';
	

	return 0;
}