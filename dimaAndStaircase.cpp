/*C. Dima and Staircase*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long altura = 0ll;
	int stairs;
	int boxes;
	int w, h;

	cin >> stairs;

	vector <Long> heights(stairs);

	for (int i = 0; i < stairs; ++i)
		cin >> heights[i];
		
	cin >> boxes;
	
	for (int i = 0; i < boxes ; ++i)
	{
		cin >> w >> h;

		if(w > stairs)			
			w = stairs;

		
		if(heights[w - 1] > altura)
			altura = heights[w - 1];
		
		cout << altura << '\n';

		altura += h;
	}

	return 0;
}