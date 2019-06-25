/*B. Unlucky Ticket*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int nums;
	string cadena;

	cin >> nums >> cadena;
	vector <int> uno(nums);
	vector <int> dos(nums);

	for (int i = 0; i < nums; ++i)
		uno[i] = cadena[i] - '0';


	for (int i = 0 ; i < nums ; ++i)
		dos[i] = cadena[i + nums] - '0';

	sort(uno.begin(), uno.end());
	sort(dos.begin(), dos.end());

	int mayores = 0, menores = 0;

	for (int i = 0; i < nums; ++i){
		if(uno[i] > dos[i])
			mayores++;
		else if(uno[i] < dos[i])
			menores++;
	}

	if((mayores > 0 and mayores == nums) or (menores > 0 and menores == nums))
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}