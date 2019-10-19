/*B. Teams Forming*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam, tot = 0;

	cin >> tam;

	vector <int> students(tam);

	for (int i = 0; i < tam; ++i)
		cin >> students[i];
	

	sort(students.begin(), students.end());

	for (int i = 0; i < tam; i += 2)
		tot += students[i+1] - students[i];
	

	cout << tot << '\n';
	
	return 0;
}