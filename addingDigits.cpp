#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int a, b, veces, aux;

	cin >> a >> b >> veces;

	bool can = false;

	for (int i = 0; i < 10; ++i)
	{
		aux = a;
		aux = (aux * 10) + i;
		
		if( aux % b == 0){
			can = true;
			break;
		}
	}

	if(can){
		veces--;

		cout << aux;
		for (int i = 0; i < veces; ++i)
		{
			cout<<'0';
		}

		cout << '\n';
	}
	else
		cout << "-1\n";
	

	return 0;
}