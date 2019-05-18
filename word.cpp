/*A. Word*/
#include <iostream>

using namespace std;

int main(){
	
	string word;

	cin >> word;

	int mayus = 0, minus = 0;

	for (int i = 0; i < word.size(); ++i){
		if(word[i] > 64 and word[i] < 91)
			mayus++;
		else
			minus++;
	}

	if(mayus > minus){

		for (int i = 0; i < word.size(); ++i){
			if(word[i] > 64 and word[i] < 91)
				cout << word[i];
			else
				cout << (char)(word[i] - 32);
			
		}
	}
	else{

		for (int i = 0; i < word.size(); ++i){
			if(word[i] > 96 and word[i] < 123)
				cout << word[i];
			else
				cout << (char)(word[i] + 32);
			
		}

	}


	return 0;
}