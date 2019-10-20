#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tam;
  cin >> tam;

  vector <int> nums(tam);
  
  int mayor = -1;

  for(int i = 0; i < tam; ++i){
    cin >> nums[i];

    if(nums[i] > mayor)
      mayor = nums[i];
  }

  bool can = true;
  vector <int> pinchePila;
  int j;

  for(int i = 0; i < tam; ++i){
  
    if( nums[i] != mayor){
      j = i - 1;
    
      while( (j + 1) < tam and nums[j + 1] != mayor){
        j++;
      
        if(pinchePila.empty() == true or pinchePila.back() > nums[j])
          pinchePila.push_back(nums[j]);
        else if(pinchePila.back() == nums[j])
          pinchePila.pop_back();
        else{
          can = false;
          break;
        }
      }
    
      if(can == false or pinchePila.size() != 0)
      {
        can = false;
        break;
      }

      i = j;
    }
  }
  
  if (can)
    cout << "YES";
  else
    cout << "NO";
  
  return 0;
}