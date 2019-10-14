#include <bits/stdc++.h>
 
using namespace std;
using Long = long long;
using ll = pair<Long, int>;
using vll = vector<ll>;
 
const Long casesOp[3] = {-1, 0, 1};
 
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	Long n;
	cin >> n;
 
	vector<Long> a(n);
 
	for (int i = 0; i < n; ++i)
		cin >> a[i];
 
	Long ans = LLONG_MAX;
 
	if (n == 1 or n == 2)
		ans = 0;
	else
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				Long currAns = 0;
				vector<Long> aux(a);
				
				aux[0] += casesOp[i];
				aux[n - 1] += casesOp[j];
 
				currAns += abs(casesOp[i]) + abs(casesOp[j]);
 
				if (aux[0] < aux[n - 1])
					reverse(begin(aux), end(aux));
 
				
				if ((aux[0] - aux[n - 1]) % (n - 1) == 0)
				{
					//cerr << currAns << "," << aux[0] << "," << aux[n - 1] << endl;
					Long d = (aux[0] - aux[n - 1]) / (n - 1);
					Long currV = aux[0] - d;
 
					for (int i = 1; i < n - 1; ++i)
					{
						//cerr << "Curr:" << abs(currV - aux[i]) << "," << currV << "," << aux[i] << endl;
						if (abs(currV - aux[i]) > 1)
						{
							currAns = LLONG_MAX;
							break;
						}
 
						currAns += abs(currV - aux[i]);
						currV -= d;
					}
 
					ans = min(ans, currAns);
				}
			}
		}
	}
 
	if (ans == LLONG_MAX)
		ans = -1;
 
	cout << ans << "\n";
 
	return 0;
}