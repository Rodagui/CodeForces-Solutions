/*A. Hulk*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;

	cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		if(i % 2 == 0){
			cout << "I love ";
		}

		if(i % 2 == 1){
			cout << "I hate ";
		}

		if(i == num){
			cout << "it ";
		}
		else{
			cout << "that ";
		}
	}
		

		

		
	
	return 0;
}