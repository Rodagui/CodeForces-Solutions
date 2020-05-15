/*A. Boredom*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

vector <Long> freq(100005, 0);
vector <Long> memo(100005, -1);

Long maxPoints(Long i);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long maximo = 0;
	Long tam;
	Long f;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> f;
		
		if(f > maximo)
			maximo = f;

		freq[f]++;
	}

	cout << maxPoints(maximo);

	return 0;
}

Long maxPoints(Long i){

	if(i <= 0){
		return 0;
	}

	if(memo[i] != -1)
		return memo[i];

	Long ans = 0;

	if(freq[i] > 0){
		ans = i * freq[i] + maxPoints(i - 2);
	}
	
	ans = max(ans, maxPoints(i - 1));

	memo[i] = ans;

	return ans;
}