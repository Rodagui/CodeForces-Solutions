/*A. Tavas and Nafas*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, d, c;
	vector <string> nums = {"zero", "one", "two", "three", "four", "five", 
							"six", "seven", "eight", "nine", "ten",
							"eleven", "twelve", "thirteen", "fourteen", "fifteen",
							"sixteen", "seventeen", "eighteen", "nineteen"};
	vector <string> decenas = {"", "", "twenty", "thirty", "forty", "fifty",
							"sixty", "seventy", "eighty", "ninety"};

	cin >> n;

	if(n < 20)
		cout << nums[n];
	else{
		d = n % 10;
		n /= 10;
		c = n % 10;

		if(d == 0){
			cout << decenas[c];
		}
		else{
			cout << decenas[c] << "-" << nums[d];
		}
	}

	return 0;
}