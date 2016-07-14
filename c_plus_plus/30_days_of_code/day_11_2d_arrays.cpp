#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
  int sum, maximum_value = -99999, ar[6][6];
  for(int i = 0; i < 6; ++i)
    for(int j = 0; j < 6; ++j)
      cin >> ar[i][j];
  for(int k = 1; k < 5; ++k){
    for(int m = 1; m < 5; ++m){
      sum = ar[k][m] + ar[k - 1][m] + ar[k - 1][m - 1] + ar[k - 1][m + 1] + ar[k + 1][m] + ar[k + 1][m - 1] + ar[k + 1][m + 1];
      if(maximum_value < sum)
        maximum_value = sum;
    }
  }
  cout << maximum_value << endl;
  return 0;
}
