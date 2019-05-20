/*A. Hexadecimal's theorem*/

#include <bits/stdc++.h>

using namespace std;

vector <int> fibonacci;

void createFibbo(int num);

int main(){

	int num;

	cin >> num;

	if(num == 0)
		cout << "0 0 0\n";
	else if(num == 1)
		cout << "0 0 1\n";
	else if(num == 2)
		cout << "0 1 1\n";
	else if(num == 3)
		cout << "1 1 1\n";
	else
		createFibbo(num);


	return 0;
}

void createFibbo(int num){

	int nvo = 0;
	int pos = 2;
	
	fibonacci.push_back(0);
	fibonacci.push_back(1);

	while(nvo != num){
		nvo = fibonacci[pos - 1] + fibonacci[pos - 2];
		fibonacci.push_back(nvo);
		pos++;
	}

	pos--;

	cout << fibonacci[pos - 4] << ' ' << fibonacci[pos - 3] << ' ' << fibonacci[pos - 1] << '\n';

}