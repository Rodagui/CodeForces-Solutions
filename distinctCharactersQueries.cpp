/* D. Distinct Characters Queries */
#include <bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
	string cadena;
	vector <vector <int> > ans;
	int tam;

	SegmentTree(){}

	
	/*Costructor: */

	SegmentTree(string s){
		cadena = s;
		tam = cadena.size();
		
		//mi arbol (vector) que guarda vectores de tam 26:
		ans = vector <vector <int> > (4*tam, vector <int> (26));

		build(0, tam - 1, 1); 
	}

	void build(int start, int end, int currIndex){
		if(start == end){
			int pos;
			pos = cadena[start] - 'a';
			ans[currIndex][pos] = 1;
		}
		else{
			int middle;
			middle = (start + end) / 2;

			build(start, middle, leftIndex(currIndex));
			build(middle + 1, end, rigthIndex(currIndex));

			saveInfo(currIndex);

		}
	}

	void saveInfo(int index){
		vector <int>& leftVec = ans[leftIndex(index)];
		vector <int>& rigthVec = ans[rigthIndex(index)];

		for (int i = 0; i < 26; ++i)
		{
			ans[index][i] = leftVec[i] + rigthVec[i];
		}
	}

	void update(int index, char caract){

		//SOLO SE ACTUALIZA SI SON DIFERENTES :V
		if(caract != cadena[index]) 
			updateRec(0, tam - 1, 1, index, caract);
	}

	void updateRec(int start, int end, int currIndex, const int& index, const char& caract){

		if(index < start or index > end){
			return;
		}
		else if(start == end){

			//para obtener el indice de la letra que se reemplazará (de la cadena)
			int pos;
			pos = cadena[index] - 'a';
			ans[currIndex][pos] = 0;

			pos = caract - 'a';
			ans[currIndex][pos] = 1;

			cadena[index] = caract;
		}
		else{
			int middle;
			middle = (start + end) / 2;

			updateRec(start, middle, leftIndex(currIndex), index, caract);
			updateRec(middle + 1, end, rigthIndex(currIndex), index, caract);

			saveInfo(currIndex);
		}
	}

	int query(int izq, int der){
		vector <int> consulta = queryRec(0, tam - 1, 1, izq, der);

		int cont = 0;
		for (int i = 0; i < 26 ; ++i)
		{
			if(consulta[i] > 0)
				cont++;
		}

		return cont;
	}

	vector <int> queryRec(int start, int end, int currIndex, const int& izq, const int& der){
		vector<int> consulta;
		if(der < start or izq > end){
			consulta = vector <int>(26);
		}
		else if(der >= end and izq <= start){
			consulta = ans[currIndex];
		}
		else{
			int middle;
			middle = (start + end) / 2;

			consulta = vector<int>(26);

			vector <int> ansIzq = queryRec(start, middle, leftIndex(currIndex), izq, der);
			vector <int> ansDer = queryRec(middle + 1, end, rigthIndex(currIndex), izq, der);

			for (int i = 0; i < 26; ++i)
				consulta[i] = ansIzq[i] + ansDer[i];
			
		}

		return consulta;
	}

	inline int leftIndex(int index){
		return (2*index);

	}

	inline int rigthIndex(int index){
		return (2*index) + 1;
	}




};


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cadena;
	cin >> cadena;

	SegmentTree miSegment(cadena);

	int queries;
	cin >> queries;

	int caso;

	while(queries--){
		
		cin >> caso;

		int pos, izq, der;
		char letra;

		if(caso == 1){  /*actualiza letra*/
			cin >> pos;
			pos--;
			cin >> letra;
			miSegment.update(pos, letra);

		}
		else{  /*Consulta en un rango*/
			
			cin >> izq >> der;
			izq--;
			der--;

			cout << miSegment.query(izq, der) << '\n';
		}

	}

	return 0;
}