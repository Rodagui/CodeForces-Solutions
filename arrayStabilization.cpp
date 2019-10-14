/*B. Array Stabilization*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int min = 10000000;
	int aux;
	int tam;
 
	cin >> tam;
 
	vector <int> nums(tam);
 
	for (int i = 0; i < tam; ++i)
	{
		cin >> nums[i];
	}
 
	if(tam == 2)
		cout << "0";
	else{
		
 
		sort(nums.begin(), nums.end());
		aux = nums[tam-1] - nums[1];
 
		if(aux < min)
			min = aux;
 
		aux = nums[tam-2] - nums[0];
 
		if (aux < min)
			min = aux;
 
		cout << min;
 
	}
 
 
	
	return 0;
}