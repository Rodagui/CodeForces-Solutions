/*F. Vacations*/
#include <bits/stdc++.h>
using namespace std;

vector <int> activ;
vector <vector <int> >memo;
int days;

int minRestDays(int ant, int pos);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> days;
	activ = vector <int>(days);
	memo = vector<vector <int> > (4, vector <int> (days, -1));

	for (int i = 0; i < days; ++i)
		cin >> activ[i];

	cout << minRestDays(0, 0);
	
	return 0;
}

int minRestDays(int ant, int pos){

	if(pos == days)
		return 0;

	if(memo[ant][pos] != -1){
		return memo[ant][pos];
	}

	int ans = 0;

	ans = 1 + minRestDays(1, pos + 1);


	if(ant == 0 or ant == 1){
		
		if(activ[pos] == 1){
			ans = min(ans, minRestDays(2, pos + 1));
		}
		else if(activ[pos] == 2){
			ans = min(ans, minRestDays(3, pos + 1));
		}
		else if(activ[pos] == 3){
			ans = min(ans, minRestDays(2, pos + 1));
			ans = min(ans, minRestDays(3, pos + 1));
		}
	}
	else if(ant == 2){
		
		if(activ[pos] == 2 or activ[pos] == 3)
			ans = min(ans, minRestDays(3, pos + 1));
		
	}
	else{

		if(activ[pos] == 1 or activ[pos] == 3)
			ans = min(ans, minRestDays(2, pos + 1));
		
	}

	memo[ant][pos] = ans;

	return ans;
}