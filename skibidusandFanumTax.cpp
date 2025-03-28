/*C2. Skibidus and Fanum Tax (hard version)*/

#include <bits/stdc++.h>
 
using namespace std;

int buscaBin( int ai, int ant, vector<int> &b);

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();
 
	int cases;
	bool ans = true;

	cin >> cases;

	while(cases--){

		ans = true;
		int n, m;

		cin >> n >> m;

		vector <int> a(n);
		vector <int> b(m);

		for (int i = 0; i < n; ++i)
			cin >> a[i];

		for (int i = 0; i < m; ++i)
			cin >> b[i];

		sort(b.begin(), b.end());

		int ant = -INT_MAX;

		for (int i = 0; i < n; ++i)
		{
			a[i] = min(a[i] >= ant ? a[i] : INT_MAX, buscaBin(a[i], ant, b));
			
			if(a[i] == INT_MAX)
				ans = false;
			else
				ant = a[i];
		}

		
		if(ans){
			cout << "yes\n";
		}
		else
			cout << "no\n";
	}
 
 
	return 0;
}

int buscaBin( int ai, int ant, vector<int> &b)
{
    int ini = 0, fin = b.size()-1, mitad;

    int res = INT_MAX;

    while (ini <= fin)
    {
        mitad = (ini + fin) / 2;
        if (b[mitad] - ai >= ant)
        {
            res = b[mitad] - ai;
            fin = mitad - 1;
        }
        else
            ini = mitad + 1;
    }
    return res;
}