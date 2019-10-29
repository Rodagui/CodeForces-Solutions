/*A. Laptops*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	vector <pair <int, int> > preCali;
	int laptops;
	int precio, calidad;
	
 
	cin >> laptops;
 
	for (int i = 0; i < laptops; ++i)
	{
		cin >> precio >> calidad;
		preCali.push_back(make_pair(precio, calidad));
	}
 
	sort(preCali.begin(), preCali.end());
 
	bool happy = false;
	int maximo = preCali[0].second;
 
	for (int i = 0; i < preCali.size(); ++i)
	{
		if(preCali[i].second < maximo){
			happy = true;
			break;
		}
 
		if(preCali[i].second > maximo)
			maximo =  preCali[i].second;
	}
 
	if(happy)
		cout << "Happy Alex";
	else
		cout << "Poor Alex";
 
 
	return 0;
}