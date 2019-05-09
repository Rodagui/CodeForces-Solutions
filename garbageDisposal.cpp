/*D. Garbage Disposal*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using Number = long long;
int main(){

	int dias;
	Number capacidad, bolsasBasura=0, aux, moda;
	
	double redondeo;

	cin>>dias>>capacidad;
	vector <Number> arr(dias);

	for (int i = 0; i < dias; ++i)
	{
		cin>>arr[i];
	}



	for (int i = dias-1; i >0 ; i--)
	{
		if(arr[i] == 0)
			continue;

		if(arr[i] >= capacidad){ //1000000000    1

			
				moda = arr[i] % capacidad; //0
				aux = capacidad - moda;   //1

				if(moda != 0){

					if(arr[i-1] >= aux){
						arr[i-1] -= aux;
					}
					else{
						arr[i] += arr[i-1];
						arr[i-1] = 0;
					}
				}

				redondeo = (double)(arr[i])/(double)(capacidad);
				bolsasBasura += (Number)ceil(redondeo); 

		}
		else{

			if(arr[i]+arr[i-1] >= capacidad){
				aux = arr[i]; //1
				arr[i] = capacidad; //2
				arr[i-1] = arr[i-1] + aux - capacidad; //2
				bolsasBasura++; //
			}
			else{
				arr[i] = arr[i] + arr[i-1];
				arr[i-1] = 0;
				bolsasBasura++;
			}
		}

}

	
	redondeo = (double)(arr[0])/(double)(capacidad);
	bolsasBasura += (Number)ceil(redondeo); //

	cout<<bolsasBasura<<"\n";

	return 0;
}