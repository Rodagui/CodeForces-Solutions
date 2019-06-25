/*A. Cards with Numbers*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream cin("input.txt");
	ofstream cout("output.txt");

	int num;

	cin >> num;

	map <int, vector <int> > cards;
	int clave;

	for (int i = 0; i < 2*num; ++i){
		cin >> clave;	
		
		if(cards.count(clave)){
			cards[clave].push_back(i);
		}
		else{
			cards[clave].push_back(i);
		}
	}

	bool impar = false;

	map <int, vector <int> >::iterator i;
	for (i = cards.begin(); i != cards.end() ; ++i){
		
		if((i -> second).size() % 2 == 1){
			impar = true;
			break;
		}
	}

	if(impar)
		cout << "-1\n";
	else{

		for (i = cards.begin(); i != cards.end() ; i++){
		
			int tam = (i -> second).size();
			int band = 1;
			
			for (int j = 0; j < tam - 1; j += 2){
				cout << i -> second[j] + 1 << ' ' << i -> second[j+1] + 1<< '\n';
			}
		}

	}


	return 0;
}