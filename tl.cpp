/*A. TL*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int correct, wrong;
	int menor = 200;
	int mayor = 0;
	int extra = 0;
	int num;

	cin >> correct >> wrong;

	vector <int> bien(correct);
	set <int> mal;

	for (int i = 0; i < correct; ++i){

		cin >> bien[i];
		
		if(bien[i] > mayor)
			mayor = bien[i];
	}

	

	for (int i = 0; i < wrong; ++i){
		cin >> num;
		mal.insert(num);
	}


	for (int i = 0; i < correct ; ++i){
		if(mal.count(bien[i]) == 0  and bien[i] < menor){
			menor = bien[i];
		}
	}
	
	extra = menor * 2;
	int pasan = false;

	set <int>::iterator i;
	for (i = mal.begin(); i != mal.end() ; ++i){
		
		if( *i <= extra or *i <= mayor){
			pasan = true;
			break;
		}

	}


	if( mal.count(extra) or mal.count(menor) or mal.count(mayor) or pasan)
		cout << "-1\n";
	else
		cout << max(extra, mayor) << '\n';

	return 0;
}