/*B. Equal Rectangles*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int casos;
 
	cin >> casos;
 
	while(casos--){
 
		int rectangles;
 
		cin >> rectangles;
		
		vector <int> lados(rectangles*4);
 
		for (int i = 0; i < 4*rectangles; ++i)
		{
			cin >> lados[i];
		}
 
 
		sort(lados.begin(), lados.end());
 
		int rigth = lados.size() - 1;
		int left = 0;
 
		int area = lados[0] * lados[rigth];
 
		int multi;
		bool can = true;
 
		while(rigth > left){
 
			multi = lados[rigth] * lados[left];
			
			if( multi != area){
				can = false;
				break;
			}
 
			if( lados[left] != lados[left + 1] or lados[rigth] != lados[rigth - 1]){
				can = false;
				break;
 
			}
 
			rigth-= 2;
			left+= 2;
		}
 
		if(can)
			cout << "YES\n";
		else
			cout << "NO\n";
 
	}
 
	return 0;
}