/*C. Alternating Subsequence*/

#include <bits/stdc++.h>
 
using namespace std;
using Long = long long;
 
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	int casos;

	cin >> casos;

	while(casos--){

		int tam;
		cin >> tam;

		vector <Long> arr(tam);
		Long maxNeg = -LLONG_MAX;
		Long maxPos = 0ll;
		bool posi = true;
		Long ans = 0ll;

		for (int i = 0; i < tam; ++i)
		{
			cin >> arr[i];

			if(i == 0){
				if(arr[i] < 0){
					posi = false;
					maxNeg = arr[i];
				}
				else{
					maxPos = arr[i];
				}	
			}		
		}

		for (int i = 1; i < tam; ++i)
		{
			if(posi){

				if(arr[i] > 0){
					maxPos = max(maxPos, arr[i]);
				}
				else{

					posi = false;
					ans += maxPos;
					maxNeg = arr[i];
				}
			}
			else{		

				if(arr[i] < 0){
					maxNeg = max(maxNeg, arr[i]);
				}
				else{
					posi = true;
					ans += maxNeg;
					maxPos = arr[i];
				}

			}
		}

		if(posi){
			ans+= maxPos;
		}
		else{
			ans+= maxNeg;
		}

		cout << ans << '\n';
	}

	return 0;
}