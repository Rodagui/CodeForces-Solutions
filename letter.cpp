/*B. Letter*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	string head;
	string letter;

	getline(cin, head);
	getline(cin, letter);

	vector <int> have(255);
	vector <int> need(255);

	int pos;

	for (int i = 0; i < head.size(); ++i){
		
		pos = head[i];
		have[pos]++;
	}

	for (int i = 0; i < letter.size(); ++i)
	{
		pos = letter[i];
		need[pos]++;
	}

	bool can = true;

	for (int i = 0; i < 255; ++i){
		if(have[i] < need[i] and i != 32){
			can = false;	
		}
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}