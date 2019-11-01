 #include <bits/stdc++.h>

using namespace std;

class DisjointSet {
public:
	int size;
	vector<int> rank;
	vector<int> parents;

	DisjointSet(const int& n):size(n), rank(n, 1), parents(n)
	{
		// Initialize parents as paren[i] = i.
		iota(begin(parents), end(parents), 0);
	}

	/*
	** Complexity: O(1)
	** Return the parent of node u.
	*/
	inline int getParent(const int& u)
	{
		if (parents[u] == u)
			return u;

		return parents[u] = getParent(parents[u]);
	}

	/*
	** Complexity: O(1)
	** Return comparation between parent of u and v.
	*/
	inline bool areSameParent(const int& u, const int& v)
	{
		return getParent(u) == getParent(v);
	}

	/*
	** Complexity: O(1)
	** Match component of node u with component of node v.
	** Return if node u can be matched with node u.
	*/
	inline bool match(int u, int v)
	{
		bool matching = false;
		int parentU = getParent(u);
		int parentV = getParent(v);

		if (parentU != parentV)
		{
			if (rank[parentU] < rank[parentV])
			{
				parents[parentU] = parentV;
				rank[parentV] += rank[parentU];
			}
			else
			{
				parents[parentV] = parentU;
				rank[parentU] += rank[parentV];
			}

			matching = true;
		}

		return matching;
	}

	/*
	** Complexity: O(nlogn)
	** Return amount of componets from node 0 to size - 1.
	*/
	inline int countTrees()
	{
		vector<int> aux = parents;
		sort(begin(aux), end(aux));

		return distance(begin(aux), unique(begin(aux), end(aux)));
	}

	/*
	** Complexity: O(n)
	** Return amount of nodes that belong to component of node u.
	*/
	inline int getNumberNodesofTree(int u)
	{
		return count(begin(parents), end(parents), getParent(u));
	}
};

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	

	int persons;
	int languages;
	int idiom;
	int ans = 0;

	cin >> persons >> languages;

	DisjointSet arbolito(languages);
	vector <int> parents(persons);

	for (int i = 0; i < persons; ++i)
	{
		cin >> idiom;

		vector <int> aux(idiom);

		if(idiom == 0)
			parents[i] = -1;

		for (int j = 0; j < idiom; ++j){
			cin >> aux[j];
			parents[i] = aux[j];
		}
		

		for (int j = 1; j < aux.size(); ++j)
			arbolito.match(aux[j - 1] - 1, aux[j] - 1);
		
	}

	set <int> unicos;

	for (int i = 0; i < persons; ++i)
	{
		if(parents[i] != -1){
			parents[i] = arbolito.getParent(parents[i] - 1);
			unicos.insert(parents[i]);
		}
		else{
			ans++;
		}
		
	}


	if(unicos.size() != 0)
		ans = unicos.size() + ans - 1;

	cout << ans;

	return 0;
}