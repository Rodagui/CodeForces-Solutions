/*Reach Median*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Number = long long;

int main(){

	int tam;
	Number s;

	cin>>tam>>s;

	vector <Number> arr(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin>>arr[i];
	}

	sort(arr.begin(), arr.end());

	int media;
	media = tam/2;
	Number tot=0;

	if( s > arr[media]){
		for (int i = media; i < tam and arr[i] < s; ++i)
		{
			tot += s - arr[i];
		}
	}
	else{
		for (int i = media; i >= 0 and arr[i] > s; i--)
		{
			tot += arr[i] - s;
		}
	}

	cout<<tot<<'\n';


	return 0;
}