/*A. Short Sort*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;
	string cad = "abc";
	string cadIn;

	cin >> cases;
	int same = 0;

	while(cases--){
		
		same = 0;

		cin >> cadIn;

		if(cadIn == cad)
			cout << "YES\n";
		else{

			for (int i = 0; i < 3; ++i)
			{
				if(cadIn[i] == cad[i])
					same++;
			}

			if(same == 1)
				cout << "YES\n";
			else
				cout << "NO\n";

		}
	}

	return 0;
}
