/*E. Checkpoints*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam, pos;
	int rango1, rango2;
	int a, b, menores = 0, mayores = 0;

	cin>>tam>>pos;

	vector <int> points(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin>>points[i];
	}

	if(tam == 1){
		cout<<"0\n";
	}
	else if( tam == 2){

		if(abs(pos - points[0]) < abs(pos - points[1]))
			cout<< abs(pos - points[0]) << '\n';
		else
			cout<< abs(pos - points[1]) <<'\n';
	}
	else{

		int fin = points.size() - 1;

		sort(points.begin(), points.end());


		if(pos < points[0]){
			cout<< abs( points[fin -1] - pos)<<'\n';
		}
		else if( pos > points[fin]){
			cout<< abs ( points[1] - pos)<<'\n';
		}
		else{


			for (int i = 0; i < points.size() ; ++i)
			{
				if(points[i] < pos){
					menores++;
				}
				if(points[i] > pos)
					mayores++;
			}


			if( menores == 1){

				rango1 = abs( pos - points[0]);
				rango2 = abs( pos - points[fin - 1]);

				if(rango1 < rango2)
					a = (rango1 * 2) + rango2;
				else
					a = (rango2 * 2) + rango1;

				b = abs(pos - points[fin]);  

			}
			else if( mayores == 1){

				rango1 = abs(pos - points[fin]);
				rango2 = abs(pos - points[1]);

				if(rango1 < rango2)
					a = (rango1 * 2) + rango2;
				else
					a = (rango2 * 2) + rango1;

				b = abs(pos - points[0]);

			}
			else{

				rango1 = abs(points[1] - pos);
				rango2 = abs(points[fin] - pos);

				if(rango1 < rango2)
					a = (rango1 * 2) + rango2;
				else
					a = (rango2 * 2) + rango1;

				rango1 = abs(points[0] - pos);
				rango2 = abs(points[fin - 1] - pos);

				if(rango1 < rango2)
					b = (rango1 * 2) + rango2;
				else
					b = (rango2 * 2) + rango1;

			}

				if(a < b)
					cout<<a<<'\n';
				else 
					cout<<b<<'\n';
			
		}
	}

	return 0;

}