/*B. Coach*/

#include <bits/stdc++.h>

using namespace std;

class DisjointSet{
public:
	int size;
	vector <int> rank;
	vector <int> parents;

	DisjointSet(const int& n):size(n), rank(n, 1), parents(n)
	{
		iota(begin(parents), end(parents), 0);
	}

	//Regresa el padre del nodo u

	inline int getParent(const int& u){
		if(parents[u] == u)
			return u;

		return parents[u] = getParent(parents[u]);
	}

	//Regresa la comparacion entre dos nodos

	inline bool sameParent(const int& u, const int& v){
		return getParent(u) == getParent(v);
	}

	inline bool match(int u, int v){
		bool matching = false;
		int parentU = getParent(u);
		int parentV = getParent(v);

		if(parentU != parentV){
			if(rank[parentU] < rank[parentV]){
				parents[parentU] = parentV;
				rank[parentV] += rank[parentU];
			}
			else{
				parents[parentV] = parentU;
				rank[parentU] += rank[parentV];
			}

			matching = true;
		}

		return matching;	
	}

	//cuenta los arboles

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

	int alumn, q;
	cin >> alumn >> q;

	DisjointSet arbolito(alumn);

	vector <int> padres(alumn);

	int a, b;

	for (int i = 0; i < q; ++i)
	{
		cin >> a >> b;
		arbolito.match(a - 1, b - 1 );
	}

	map <int, vector <int> > teams;
	
	for (int i = 0; i < padres.size(); ++i)
		padres[i] = arbolito.getParent(i);
	
	for (int i = 0; i < padres.size(); ++i)
		teams[padres[i]].push_back(i);

	
	map <int, vector <int> >::iterator it;
	vector <int> unicos;

	bool can = true;
	int tam;
	int aux = 0;

	for (it = teams.begin(); it != teams.end() ; ++it)
	{
		tam = it -> second.size();

		if(tam > 3)
			can = false;

		if(tam == 2){
			aux++;
		}

		if(tam == 1)
			unicos.push_back( it -> first);
	}

	if(aux > unicos.size())
		can = false;

	if(can){


		for (it = teams.begin(); it != teams.end() ; ++it){
			
			tam = it -> second.size();

			if(tam == 2){
				
				it -> second.push_back(unicos.back());
				teams.erase(unicos.back());
				unicos.pop_back();
			
			}

		}

		for (it = teams.begin(); it != teams.end() ; ++it){
			
			tam = it -> second.size();

			if(tam == 1){

				it -> second.push_back(unicos.back());
				teams.erase(unicos.back());
				unicos.pop_back();

				it -> second.push_back(unicos.back());
				teams.erase(unicos.back());
				unicos.pop_back();
			}

		}

		for (it = teams.begin(); it != teams.end() ; ++it)
		{
			tam = it -> second.size();

			for (int i = 0; i < tam; ++i)
				cout << it -> second[i] + 1<< ' ';
			

			cout << '\n';
		}

	}
	else{
		cout << "-1";
	}


	return 0;
}