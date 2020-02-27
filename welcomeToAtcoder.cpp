/*C - Welcome to AtCoder*/

#include <bits/stdc++.h>

using namespace std;

int main(){
   
	map <int, int> WA;
	set <int> AC;
	int ansWA = 0;
	int problems;
	int submit;
	
	 cin >> problems >> submit;
	 string veredict;
	 int p; 

	  for(int i = 0; i < submit; i++){
		cin >> p >> veredict;
		if(veredict == "AC")
		   AC.insert(p);
		
		if(veredict == "WA"){
 
		  if(AC.count(p) == 0)
			 if(WA.count(p))
				WA[p]++;
			 else
				 WA[p]= 1;
		  } 
	   }

	 map <int, int> ::  iterator it;
	
	 for(it = WA.begin(); it != WA.end(); it++){
	 	if(AC.count(it -> first))
	  		ansWA += it -> second;
	  }

	cout << AC.size() << " " << ansWA;

   return 0;
}
