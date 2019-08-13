/*A. Transformation: from A to B*/

#include <bits/stdc++.h>

using namespace std;

unordered_map <long long, long long> parent;

bool dfs(long long start, long long& final){

	if(start == final)
		return true;
	else if(start > final)
		return false;
	else{
		parent[2*start] = start;
		parent[(10* start) + 1] = start;

		return dfs(start * 2, final) or dfs((10 * start) + 1, final);
	}
}


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

 	long long start, final;

 	cin >> start >> final;

 	stack <long long> road;

 	if (dfs(start, final)){
 		cout << "YES\n";

 		long long aux = final;

 		while( aux != start){
 			
 			road.push(aux);
 			aux = parent[aux];

 		}

 		road.push(start);

 		cout << road.size() << '\n';

 		while(! road.empty() ){
 			cout << road.top() << ' ';
 			road.pop();
 		}
 		
 	}
 	else
 		cout << "NO\n";

 	return 0;
 }