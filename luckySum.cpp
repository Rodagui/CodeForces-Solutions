/*A. Lucky Sum*/
#include <bits/stdc++.H>
using namespace std;
using Long = long long;
#define MAX_N 1000000000
#define lim 77777777

vector <Long> numsLucky;

void luckyNumbers(){

	numsLucky.push_back(4ll);
	numsLucky.push_back(7ll);

	Long pot = 10ll;
	Long maximo = 7ll;
	set <Long>::iterator it;
	
	while(maximo <= MAX_N){
		
		vector <Long> aux;
		Long nvo, num;
		Long cuatro = 4ll, siete = 7ll;

		
		for (int i = 0 ; i < numsLucky.size(); ++i)
		{
			num = numsLucky[i];

			if(num > (pot / 10ll)){

				nvo = (cuatro*pot) + num;
				aux.push_back(nvo);
				
				if(nvo > maximo)
					maximo = nvo;

				nvo = (siete*pot) + num;
				aux.push_back(nvo);

				if(nvo > maximo)
					maximo = nvo;
			}


		}

		for (int i = 0; i < aux.size(); ++i)
		{
			numsLucky.push_back(aux[i]);
		}

		pot *= 10ll;

	}

	sort(numsLucky.begin(), numsLucky.end());
	numsLucky.push_back(4444444444);

	/*for (int i = 0; i < numsLucky.size(); ++i)
		{
			cout << numsLucky[i] << '\n';
		}*/

	return;
};

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	luckyNumbers();

	Long left, right;
	int i = 0;
	Long aux = 0ll;
	Long tot = 0ll;

	cin>> left >> right;

	while(left <= right){

		if(left < numsLucky[i] and right < numsLucky[i]){

			tot += (right - left + 1ll) * numsLucky[i];

			break;
		}
		else if( left <= numsLucky[i]){
			tot += ((numsLucky[i] - left + 1ll)* numsLucky[i] );
			left = numsLucky[i] + 1ll;
		}
		
		i++;

	}
	cout << tot;


	return 0;
}