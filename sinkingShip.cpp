/*A. Sinking Ship*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int persons;

	string nombre;
	string puesto;

	cin >> persons;

	vector <string> rats;
	vector <string> wansc;
	vector <string> mans;
	string captain = "";

	for (int i = 0; i < persons; ++i)
	{
		cin >> nombre >> puesto;

		if(puesto == "rat")
			rats.push_back(nombre);
		if(puesto == "woman" or puesto == "child")
			wansc.push_back(nombre);
		if(puesto == "man")
			mans.push_back(nombre);
		if(puesto == "captain")
			captain = nombre;
	}

	for (int i = 0; i < rats.size(); ++i)
		cout << rats[i] << '\n';

	for (int i = 0; i < wansc.size(); ++i)
		cout << wansc[i] << '\n';

	for (int i = 0; i < mans.size(); ++i)
		cout << mans[i] << '\n';

	if(captain.size() != 0)
		cout << captain;


	return 0;
}