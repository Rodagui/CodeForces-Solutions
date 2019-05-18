/*A. Comparing Strings*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	string uno, dos;
	int pos1 = 0, pos2 = 0;
	int band = 1;

	cin >> uno >> dos;

	if(uno.size() != dos.size())
		cout << "NO\n";
	else{

		for (int i = 0; i < uno.size(); ++i){
			
			if(uno[i] != dos[i] and band == 2){
				pos2 = i;
				break;
			}

			if(uno[i] != dos[i] and band == 1){
				pos1 = i;
				band++;
			}
		}

		swap(uno[pos1], uno[pos2]);

		if(uno == dos)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}