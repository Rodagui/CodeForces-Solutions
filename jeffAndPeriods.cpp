/*B. Jeff and Periods*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

	int numeros, num;
	cin>>numeros;

	map <int, vector <int> > freq;

	for (int i = 0; i < numeros; ++i)
	{
		cin>> num;
		
		freq[num].push_back(i);

	}

	map <int, vector <int> > :: iterator i;
	int tam, totNum = 0, periodo, p, band = 0;

	totNum = freq.size();

	for ( i = freq.begin() ; i != freq.end() ; ++i){
		
		tam = i -> second.size();

		if(tam > 1){
			periodo = i -> second[1] - i -> second[0];

			for (int j = 0; j < tam - 1; ++j)
			{
				p =  i -> second[j + 1] - i -> second[j] ;
				
				if( p != periodo){
					i -> second[0] = -1;
					band++;
					break;
				}
				
			}
	
		}
	
	}

	if(band == freq.size()){
		cout<<"0\n";
	}
	else{
		
		cout<< freq.size() - band<<'\n';


		for ( i = freq.begin() ; i != freq.end() ; ++i){
		
			tam = i -> second.size();
			if(i -> second[0] != -1){
				cout<<i -> first<<" ";

				if( tam > 1){
					cout<< i -> second[1] - i-> second[0]<<'\n';
				}
				else{
					cout<<"0\n";
				}

			}
			

	
		}


	}

	return 0;
}