/*D. Cutting Out*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int nums;
	int tam;
	int aux;
	int fq;
	int der;
	int izq;
	int middle;
	int indice;

	cin >> nums >> tam;

	vector <pair <int, int> > freq;
	map <int, int> unicos;

	for (int i = 0; i < nums; ++i)
	{
		cin >> aux;

		if( unicos.count(aux) )
			unicos[aux]++;
		else
			unicos[aux] = 1;
	}

	map <int, int>::iterator it;


	for ( it = unicos.begin(); it != unicos.end() ; ++it)
	{
		aux = it->first;
		fq = it->second;

		freq.push_back(make_pair(fq, aux));	
	}

	sort(freq.begin(), freq.end());

	izq = 1;
	indice = freq.size() - 1;
	der = freq[indice].first;

  	vector<int> auxAns(tam);
	vector <int> ans;
	int longi;
	int res = 0;

	while(izq <= der){

		middle = (izq + der) / 2;
		int cortes = middle;
      	longi = 0;

		for (int i = indice; i >= 0 and longi < tam; --i)
		{
          	if (freq[i].first < middle)
              break;
            
          	int vcs = freq[i].first / cortes;
          
			for (int j = 0; j < vcs and longi < tam; ++j)
			{
				auxAns[longi] = freq[i].second;
				++longi;
			}
		}

		if(longi == tam){
			ans = auxAns;
			izq = middle + 1;
		}
		else{
			der = middle - 1;
		}

	}

	for (int i = 0; i < tam; ++i)
	{
		cout << ans[i] << ' ';
	}

	return 0;
}