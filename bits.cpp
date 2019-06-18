/*A. Bit++*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int lines;

	cin >> lines;

	string instruc;

	int tot = 0;

	for (int i = 0; i < lines; ++i){
			
			cin >> instruc;
			
			int band = 0;

			for (int i = 0; i < instruc.size(); ++i){
				if(instruc[i] == '+' and band == 0){
					tot++;		
					band = 1;
				}

				if(instruc[i] == '-' and band == 0){
					tot--;		
					band = 1;
				}
			}


	}

	cout << tot <<'\n';


	return 0;
}