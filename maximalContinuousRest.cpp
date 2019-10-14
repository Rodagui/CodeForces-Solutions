/*B. Maximal Continuous Rest*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int days;
	cin >> days;
 
	vector <int> nums(days);
 
	for (int i = 0; i < days; ++i)
	{
		cin >> nums[i];
	}
 
	for (int i = 0; i < days; ++i)
	{
		nums.push_back(nums[i]);
	}
 
	int maxima = 0;
	int aux = 0;
	int rest = 0;
 
	for (int i = 0; i < nums.size(); ++i)
	{
		if(nums[i] == 1){
			aux++;
		}
		else{
			if(aux > maxima){
				maxima = aux;
			}
 
				aux = 0;
		}
 
	}
 
	cout << maxima << '\n';
 
	return 0;
}