/*B. Snow Walking Robot*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;

	cin >> cases;

	while(cases--){

		string instruc;
		cin >> instruc;
		int minX = 10000000;
		int minY = 10000000;

		vector <int> ord(4);

		for (int i = 0; i < instruc.size() ; ++i)
		{
			if(instruc[i] == 'L')
				ord[0]++;
			if(instruc[i] == 'R')
				ord[1]++;
			if(instruc[i] == 'U')
				ord[2]++;
			if(instruc[i] == 'D')
				ord[3]++;
		}

		if(ord[0] < minX)
			minX = ord[0];

		if(ord[1] < minX)
			minX = ord[1];

		if(ord[2] < minY)
			minY = ord[2];
		
		if(ord[3] < minY)
			minY = ord[3];

		long long letras = 0;
		string ans = "";

		if(minX == 0 and minY == 0){
			letras = 0;

		}
		else{
			
			if(minX == 0 ){
				letras = 2;
				ans = "UD";
			}
			else if(minY == 0){
				letras = 2;
				ans = "LR";
			}
			else{
				
				letras += (2 * minX) + (2 * minY);
				
				for (int i = 0; i < minX; ++i)
					ans += 'R';
				

				for (int i = 0; i < minY; ++i)
					ans += 'U';
				

				for (int i = 0; i < minX; ++i)
					ans += 'L';
				
				
				for (int i = 0; i < minY; ++i)
					ans += 'D';
				
			}
		}

		cout << letras << '\n' << ans << '\n';
	}
	return 0;
}