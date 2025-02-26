#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int tam;
	cin >> tam;

	int sereja = 0;
	int dima = 0;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];
	
	int left = 0;
	int right = tam - 1;

	for (int i = 0; i < tam; ++i)
	{
		if(i % 2 == 0){
			
			if(arr[left] >= arr[right]){
				sereja += arr[left];
				left++;
			}
			else{
				sereja+= arr[right];
				right--;
			}
			
		}
		else{
			
			if(arr[left] >= arr[right]){
				dima += arr[left];
				left++;
			}
			else{
				dima+= arr[right];
				right--;
			}

		}
	}

	cout << sereja << " " << dima;


	return 0;
}