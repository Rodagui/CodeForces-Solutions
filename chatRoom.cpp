/*A. Chat room*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string word;
  cin >> word;

  int band = 0;

  for(int i=0; i < word.size(); ++i){

    if( word[i] == 'o' and band == 4 )
      band = 5 ;

    if( word[i] == 'l' and band == 3 )
      band = 4;

    if( word[i] == 'l' and band == 2 )
      band = 3;

    if( word[i] == 'e' and band == 1 )
      band = 2;

    if( word[i] == 'h' and band == 0 )
      band = 1;

  } 
         
  if (band == 5)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}