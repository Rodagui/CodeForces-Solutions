#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int casos;
	cin>>casos;

	string word;
	char letter;
	bool ans = false;

	while(casos--){

		ans = false;

		cin >> word;

		for (int i = 0; i < 3; ++i){
			letter = toupper(word[i]);
			word[i] = letter;
		}

		if(word == "YES")
			ans = true;

		if(ans)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	

	return 0;
}