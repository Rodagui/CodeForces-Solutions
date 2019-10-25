/*D. Roads not only in Berland*/

#include <bits/stdc++.h>

using namespace std;

class DisjointSet {
public:
	int size;
	vector <int> rank;
	vector <int> parents;

	DisjointSet(const int& n):size(n), rank(n, 1), parents(n){
		//inicializa parent[i] = i
		iota(begin(parents), end(parents), 0);
	}

	inline int getParent(const int& u){
		
		if(parents[u] == u)
			return u;
	
		return parents[u] = getParent(parents[u]);
	}

	inline bool areSameParent(const int& u, const int& v){
		return getParent(u) == getParent(v);
	}

	inline bool match(int u, int v){
		
		bool matching = false;
		int parentU = getParent(u);
		int parentV = getParent(v);

		if(parentU != parentV){

			if(rank[parentU] <= rank[parentV]){
				
				parents[parentU] = parentV;
				rank[parentV] += rank[parentU];

			}
			else{
				
				parents[parentV] = parentU;
				rank[parentU] = rank[parentV];

			}

			matching = true;

		}

		return matching;
	}

	inline int countTrees(){
		vector <int> aux = parents;
		sort(begin(aux), end(aux));

		return distance(begin(aux), unique(begin(aux), end(aux)));
	}

	inline int getNumberNodesofTree(int u){
		return count(begin(parents), end(parents), getParent(u));
	}
};

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cities;
	int u, v;
	int parentU;
	int parentV;
	int indice = 0;
	
	cin >> cities;
	
	DisjointSet roads(cities);

	vector <pair <int, int> > options;
	
	for (int i = 0; i < cities - 1; ++i)
	{
		cin >> u >> v;
		u--,
		v--;

		if( roads.getParent(u) == roads.getParent(v) )
			options.push_back(make_pair(u,v));

		roads.match(u,v);
	}

 	cout << options.size() << '\n';

	parentU = roads.getParent(0);

	for (int i = 1; i < cities; ++i)
	{
		parentV = roads.getParent(i);
			
		if(parentU != parentV){

			cout << options[indice].first + 1 << ' ';
			cout << options[indice].second + 1 << ' ';
			cout << parentU + 1<< ' ' << parentV + 1<< '\n';
				
			indice++;
			roads.match(parentU, parentV);
			parentU = roads.getParent(parentU);

		}
	}

	return 0;
}
