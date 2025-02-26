#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	int rating;

	while(cases--){

		cin >> rating;

		if(rating <= 1399)
			cout<<"Division 4\n";
		else if(rating <= 1599)
			cout<<"Division 3\n";
		else if(rating <= 1899)
			cout<<"Division 2\n";
		else
			cout<<"Division 1\n";

	}
	

	return 0;
}