/*A. Group of Students*/
#include <bits/stdc++.h>
 
using namespace std;
using Long = long long;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	Long total = 0ll;
	bool can = false;
	Long aux = 0ll;
	int alumns;
	int x, y;
	
	cin >> alumns;
 
	vector <Long> arr(alumns);
 
 
	for (int i = 0; i < alumns; ++i)
	{
		cin >> arr[i];
		total += arr[i];
	}
 
	cin >> x >> y;
 
	for (int i = 0; i < alumns; ++i)
	{
		
		aux += arr[i];
 
		if(aux >= x and aux <= y and (total - aux) >= x and (total - aux) <= y){
			cout << i + 2;
			can = true;
			break;
		}
	}
 
	if(!can)
		cout << '0';
 
	return 0;
}