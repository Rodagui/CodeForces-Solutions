/*D. Shahhoud Training Hussain*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin>>casos;

	while(casos--){

		unsigned long long k, p, dias;
		unsigned long long min;

		cin>>k>>p>>dias;

		if(k < p)
			min = k;
		else
			min = p;

		unsigned long long tot;

		tot = (k - min) * dias;

		cout<<tot<<'\n';

	}

	return 0;

}