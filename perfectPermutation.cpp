/*A. Perfect Permutation*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	cin >> n;
	vector <int> arr(n);

		int i;

		if(n % 2 == 0){
			
			for ( i = 0; i < n - 1; i+= 2){
				arr[i] = i + 2;
				arr[i + 1] = i + 1;
			}

			for ( i = 0; i < n - 1; i+= 2)
				cout << arr[i] << ' ' << arr[i + 1] << ' ' ;
			
		}
		else{
			cout << "-1\n";
		}

	return 0;
}