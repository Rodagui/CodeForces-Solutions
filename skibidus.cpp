/*A. Skibidus and Amog'u*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();
 
	int cases;
 
	cin >> cases;
	string singular;
	string plural;
 
	while(cases--){
 
		cin >> singular;
		plural = "";
 
		for (int i = 0; i < singular.size() - 2; ++i)
		{
			plural += singular[i];
		}
 
		plural += "i";
 
		cout << plural << "\n";
 
 
	}
 
 
	return 0;
}