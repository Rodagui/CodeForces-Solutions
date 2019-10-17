/*B. T - Primes PARA QUE UN NUMERO PRIMO TENGA
EXACTAMENTE TRES DIVISORES ES EL CUADRADO DE UN UMERO PRIMO*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;
const Long maxN = 1000000000000ll;

Long sqrtMaxN = Long(sqrt(maxN)) + 1;

vector<bool> isPrime;

set <Long> ans;

vector<Long> primes;
vector<Long> smallestPrimeFactor(sqrtMaxN + 1);
/*
** Algorithm: Linear Sieve of Eratostenes.
** Complexity: O(n)
*/
inline void createSieve(const Long& n){
	
	for (Long i = 2; i <= n; ++i){
		if (smallestPrimeFactor[i] == 0){
			smallestPrimeFactor[i] = i;
			primes.push_back(i);
			ans.insert(i*i);

		}

		for (Long j = 0; j < int(primes.size()) and primes[j] <= smallestPrimeFactor[i] and i *primes[j] <= n; ++j)
			smallestPrimeFactor[i * primes[j]] = primes[j];
	}
	
	return;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	createSieve(sqrtMaxN);

	int casos;

	Long num, aux;

	cin >> casos;

	while(casos--){

		cin >> num;

		if(ans.count(num))
			cout << "YES\n";
		else
			cout << "NO\n";

		

	}


	return 0;
}

