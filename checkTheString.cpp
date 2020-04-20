/*F. Check the string*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	cin >> cad;

	bool can = true;
	int band = 0;

	bool a = true;
	bool b = true;
	bool c = true;

	int numAs = 0;
	int numBs = 0;
	int numsCs = 0;

	for (int i = 0; i < cad.size(); ++i)
	{
		if(cad[i] == 'a'){
			if(a == false or c == false){
				can = false;
			}
			numAs++;
		}
		else if(cad[i] == 'b'){
			a = false;

			if(c == false){
				can = false;
			}
			numBs++;
		}
		else{
			b = false;
			c = false;
			numsCs++;
		}
	}

	if(can){
		if(numAs == 0 or numBs == 0 ){
			cout << "NO";
		}
		else{
			if(numAs == numsCs or numBs == numsCs){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
		
	}
	else{
		cout << "NO";
	}

	return 0;
}