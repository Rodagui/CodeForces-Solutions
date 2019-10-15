/*B. Easy Number Challenge*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;
#define mod 1073741824;
const Long maxN = 1000000ll;

Long sqrtMaxN = Long(sqrt(maxN)) + 1;

vector<Long> primes;
vector<bool> isPrime;

map <Long, Long> ans;

void createSieve(const Long& n){
	isPrime = vector<bool>(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;

	for (Long p = 2; p <= n; ++p){
		if (isPrime[p]){
			primes.push_back(p);
			for (Long multiple = p * p; multiple <= n; multiple += p)
				isPrime[multiple] = false;
		}

	}

return;

}

inline vector< pair<Long, Long> > getFactorization(Long& n)
{

	vector< pair<Long, Long> > factorization;
	Long sqrtN = Long(sqrt(n));

	for (int i = 0; i < int(primes.size()); ++i){
	// If the current prime is bigger that square root of n then stop.
		if (primes[i] > sqrtN)
			break;
		
		if (n % primes[i] == 0){
			Long power = 0;
			
			while (n % primes[i] == 0){
				n /= primes[i];
				++power;
			}

			factorization.push_back({primes[i], power});
		}
	}

	// If n is not 1 that means that is prime factor.
	if (n > 1)
		factorization.push_back({n, 1});
	
	return factorization;
}

Long numDivisores(Long num){

	Long suma = 1;
	Long pot = 0;

	vector <pair <Long, Long> > potencias = getFactorization(num);

	for (int i = 0; i < potencias.size(); ++i)
	{
		pot = potencias[i].second + 1;

		suma *= pot;
		suma %= mod;
		
	}

	suma %= mod;

	return suma;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	createSieve(sqrtMaxN);
	ans[2] = 2;
	ans[1] = 1;

	Long a, b, c, mult, tot = 0, aux;

	cin >> a >> b >> c;

	for (int i = 1; i <= a ; ++i)
	{
		for (int j = 1; j <= b ; ++j)
		{
			for (int k = 1; k <= c ; ++k)
			{
				mult = i*j*k;
				mult %= mod;

				if(ans.count(mult) == 0){
					aux = numDivisores(mult);
					ans[mult] = aux;
				}

				tot += ans[mult];

				tot %= mod;				
			}

		}
	}

	cout << tot << '\n';


	return 0;
}

