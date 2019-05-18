/*A. Stones on the Table*/

#include <iostream>

using namespace std;

int main(){

	string stones;
	int tam;

	cin >> tam >> stones;

	int total = 0;

	for (int i = 1; i < stones.size(); ++i){
		if(stones[i] == stones[i-1])
			total++;
	}

	cout << total <<'\n';

	return 0;
}