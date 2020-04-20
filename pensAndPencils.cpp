/*C - Pens and Pencils*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;
	cin >> casos;

	while(casos--){
		int conf;
		int clases;
		int pen;
		int pencil;
		int space;
		int x, y;

		cin >> conf >> clases >> pen >> pencil >> space;

		int need = 0;

		need = conf / pen;

		if(conf % pen != 0)
			need++;
		
		x = need;

		y = clases / pencil;
		need += y;

		if(clases % pencil != 0){
			need++;
			y++;
		}
		
		if(need <= space){
			cout << x << ' ' << y;
		}
		else{
			cout << "-1";
		}

		cout << '\n';

	}
	return 0;
}