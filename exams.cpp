/*A. Exams*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int exams;
	int score;
	int aux = 0;
	int ans;

	cin >> exams >> score;

	if(score / exams > 2)
		cout << 0;
	else{

		if(score % exams == 0 )
			cout << exams;
		else{
			for (int i = 1; i < exams; ++i)
			{
				ans = i;
				if((score - (2*i)) % (exams - i) ==  0 )
					break;
			}

			cout << ans;
		}
	}
	return 0;
}