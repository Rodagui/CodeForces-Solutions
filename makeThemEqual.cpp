/*E - Make Them Equal*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();

	int elem;
	cin >> elem;

	vector <int> nums(elem);
	bool todosIguales = true;

	for (int i = 0; i < elem; ++i)
	{
		cin >> nums[i];
	}
    
    /* Ordenalos desde un inicio */
	sort(nums.begin(), nums.end());

	int valor = 0;

	if (elem == 1)
	{
		cout << "0\n";
	}
	else if(elem == 2){
		valor = (nums[1] - nums[0]);
		
		if(valor % 2 == 0)
		{
			valor = valor / 2;
		
    		/* si el valor es divisible el num[1] se mueve sino lo dejas asi y que el a[0]
    		se mueva al a[1]
    		*/
		    nums[1] -= valor; // 3, 6
          // 2, 8
          // 5, 5,
		}

		nums[0] += valor;

		if(nums[0] == nums[1])
			cout << valor << '\n';
		else
			cout << "-1\n";
	}
	else{
		
	    int primerNum, segunNum;
		
        primerNum = nums[0];

		for (int i = 0; i < elem; ++i)
		{
			if(nums[i] != primerNum){
				segunNum = nums[i];
				break;
			}
		}


		int d;
		d =  segunNum - primerNum;
	    
	    /* Si el ultimo elemento del arreglo ordenado es igual al segundo significa que
	    solo hay 2 valores en todo el arreglo entonces es la misma idea que en la de tamaño 2 */	
		if (segunNum == nums[elem - 1] and d % 2 == 0)
		    d /= 2;
		
		valor = nums[0] + d;

		bool can = true;

		for (int i = 0; i < elem; ++i)
		{
			if(nums[i] < valor)
				nums[i] += d;
			else if(nums[i] > valor)
				nums[i] -= d;

			if(nums[i] != valor){
				can = false;
				break;
			}
				
		}

		if(can)
			cout << d << '\n';
		else
			cout << "-1\n";

	}

	return 0;
}
