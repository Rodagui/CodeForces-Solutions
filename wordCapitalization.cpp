/*A. Word Capitalization*/
#include <iostream>

using namespace std;

int main(){
	
	string word;

	cin >> word;


	for (int i = 0; i < word.size(); ++i)
	{
		if(i == 0){
			if(word[0] > 64 and word[0] < 91)
				cout << word[i];
			else
				cout << (char)(word[i] - 32);
		}
		else
			cout<<word[i];
	}

	
			
		
	return 0;
}