/*E. Boxers*/
#include<bits/stdc++.h>

using namespace std;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int total = 0;
	int nums;
	int pos;

	cin >> nums;		
	
	vector<int> freq(150002);	
	
	for (int i = 0; i < nums ; ++i)
	{
		cin >> pos;
		freq[pos]++;		
	}
		
	if(freq[1] > 1)
		freq[2]++;
			
	for (int i = 2; i < 150001  ; ++i)
	{
		if( freq[i] >= 1 and freq[i - 1] == 0){
			freq[i - 1]++;
			freq[i]--;
		}
		
		if(freq[i] > 1){
			freq[i + 1]++;
			freq[i]--;
		}
			
	}

	for (int i = 1; i < 150002; ++i){
		
		if(freq[i] != 0)
			total++;
	}
		
	cout << total;

	return 0;
}

