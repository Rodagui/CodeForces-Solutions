/*E. Boxers*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int nums, x;
 
	cin >> nums;
 
	map <int, int> freq; 
 
 
	for (int i = 1; i <= 150001; ++i)
	{
		freq[i] = 0; 
	}
 
 
	for (int i = 0; i < nums; ++i)
	{
		cin >> x;
		freq[x]++;
	}
 
	map <int, int>::iterator it;
 
	int actual, anterior, sig;
 
	for ( it =  freq.begin(); it != freq.end() ; ++it)
	{
		actual = it -> first;
 
		if ( freq[actual] > 0){
			
			anterior = actual - 1;
 
			if(anterior != 0){
				if(freq[anterior] == 0 ){
					freq[anterior]++,
					freq[actual]--;
				}
				if(freq[actual] > 1){
					sig = actual + 1;
					freq[sig]++;
					freq[actual]--;
				}
			}
			else{
 
				if(freq[actual] > 1){
					sig = actual + 1;
					freq[sig]++;
					freq[actual]--;
				}
				
			}
 
 
		}
	}
 
	int tot = 0;
 
	for ( it =  freq.begin(); it != freq.end() ; ++it)
	{
		if(it -> second > 0)
			tot++;
	}
 
	cout << tot << '\n';
 
	
 
	return 0;
}