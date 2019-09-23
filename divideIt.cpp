/*D - Divide it!*/

#include <bits/stdc++.h>

#define INF LLONG_MAX

using namespace std;
using Long = long long;

Long getSolution(Long& n)
{
	Long ans = 0;
  	
	/*
	 * n/5 => 4n/5 |||
	 * n/3 => 2n/3 ||
	 * n/2 => n
	 * */
  
  	while (n % 5ll == 0)
    {
		ans += 3;
      	n /= 5ll;
	}
  
  	while (n % 3ll == 0)
    {
		ans += 2;
      	n /= 3ll;
    }
  
  	while (n % 2ll == 0)
    {
		++ans;
    	n /= 2ll;
    }
  
  	if (n != 1)
      ans = -1;
  
	return ans;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	Long n;
  	int q;
	cin >> q;
  
  	while (q--)
    {
		cin >> n;
		
		cout << getSolution(n) << "\n";
    }
  
	return 0;
}