/*A. Cut Ribbon*/

#include <bits/stdc++.h>

using namespace std;
#define menosINF -10000000;
int a, b, c;
vector <int> queries(4005, -1);

int cutRibbon(int tam){

	int uno, dos, tres;

	if(tam == 0){
		return 0;
	}
	else if( tam < 0){
		return menosINF;
	}
	else{

		if(queries[tam] == -1){
			
			uno = cutRibbon(tam - a);
			dos = cutRibbon(tam - b);
			tres = cutRibbon(tam - c);
			queries[tam] = max(uno, dos);
			queries[tam] = max(queries[tam], tres);
		}

		return queries[tam] + 1;
	}

}


int main(){
	
	int tam;
	cin >> tam >> a >> b >> c;

	cout << cutRibbon(tam);

	return 0;
}