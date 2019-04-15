/*A. Young Physicist*/

#include <iostream>

using namespace std;

int main(){

	int casos;
	int x, y, z;
	int totx = 0;
	int toty = 0;
	int totz = 0;

	cin>>casos;

	while(casos--){
		cin>>x>>y>>z;

		totx += x;
		toty += y;
		totz += z;
	}

	if(totx == 0 and toty == 0 and totz == 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;

}