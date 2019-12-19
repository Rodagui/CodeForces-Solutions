 /*B. Flag Day*/

 #include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int persons;
	int dance;

	map <int, int> freq;

	cin >> persons >> dance;

	vector <int> ans(persons);

	int a, b, c, aux;

	for (int i = 0; i < dance; ++i)
	{
		cin >> a >> b >> c;
		
		vector <int> disp(3);

		if(freq.count(a)){
			aux = freq[a];
			disp[aux] = 1;
		}

		if(freq.count(b)){
			aux = freq[b];
			disp[aux] = 1;
		}

		if(freq.count(c)){
			aux = freq[c];
			disp[aux] = 1;
		}


		if(!freq.count(a)){
			for (int i = 0; i < 3; ++i)
			{
				if(disp[i] == 0){
					freq[a] = i;
					ans[a-1] = i;
					disp[i] = 1;
					break;
				}
			}
		}

		if(!freq.count(b)){
			for (int i = 0; i < 3; ++i)
			{
				if(disp[i] == 0){
					freq[b] = i;
					ans[b-1] = i;
					disp[i] = 1;
					break;
				}
			}
		}

		if(!freq.count(c)){
			for (int i = 0; i < 3; ++i)
			{
				if(disp[i] == 0){
					freq[c] = i;
					ans[c-1] = i;
					disp[i] = 1;
					break;
				}
			}
		}

		
	}

	for (int i = 0; i < persons; ++i)
	{
		cout << ans[i] + 1 << ' ';
	}


	return 0;
}