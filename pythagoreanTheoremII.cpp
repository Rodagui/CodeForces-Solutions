/*A. Pythagorean Theorem II*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int num;
 
	cin >> num;
 
	int cont = 0;
 
	for (int i = 1; i <= num ; ++i)
	{
		for (int j = i ; j <= num ; ++j)
		{
			int c = (i*i) + (j*j);
			int raiz = sqrt(c);
			
			if(raiz * raiz == c and raiz >= j and raiz <= num)
					cont++;
		}
	}
 
	cout << cont;
	return 0;
}