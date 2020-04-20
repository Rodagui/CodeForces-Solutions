/*B. Yet Another Palindrome Problem*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int cases;
	cin >> cases;
 
	while(cases--){
		
		bool exists = false;
		int aux = 0;
		int tam;
 
		cin >> tam;
 
		vector <int> nums(tam);
 
		for (int i = 0; i < tam; ++i)
			cin >> nums[i];
		
 
		for (int i = 0; i < tam; ++i)
		{
 
			for (int j = i + 1; j < tam; ++j)
			{
				if(nums[j] == nums[i]){
					if(j - i > 1){
						exists = true;
						break;
					}
				}
				
			}
 
			if(exists)
				break;
		}
 
		if(exists)
			cout << "YES\n";
		else
			cout << "NO\n";
 
	}
	
	return 0;
}