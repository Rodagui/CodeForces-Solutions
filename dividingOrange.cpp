/*A. Dividing Orange*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int n, childs, aux;
	cin >> n >> childs;

	vector <int> segmentos(n * childs);
	vector <vector <int> > ans(childs);

	for (int i = 0; i < childs ; ++i)
	{
		cin >> aux;
		ans[i].push_back(aux);
		segmentos[aux - 1]++;
	}

	int ap = 0;

	for (int i = 0; i < childs; ++i)
	{
		while(ans[i].size()!= n){
			if(segmentos[ap] == 0){
				ans[i].push_back(ap+1);
				segmentos[ap]++;
			}
			
			ap++;
		}
	}

	for (int i = 0; i < childs; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << ans[i][j] << ' ';
		}

		cout << '\n';
	}

	return 0;
}

