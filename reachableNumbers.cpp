/*A. Reachable Numbers*/

#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long num, tot = 1, aux = 0, dig;

	cin >> num;

	if (num < 10)
		tot = 0;

	num++; 
	long long minNumVisited = num;

	while(num != 1){
		dig = num % 10ll; 

		if(dig != 0){  
			minNumVisited = min(minNumVisited, num);
			aux = 10ll - dig;
			tot += aux; 
			num += aux; 
		}
		else
			num = num / 10ll; 

	}

	tot += min(minNumVisited, 10ll) - 1;

	cout << tot <<'\n';
	return 0;
}