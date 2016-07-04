#include <iostream>
#include <vector>
using namespace std;
int main(){
  int size, sum, i, j;
  cin >> size;
  vector<int> numbers;
  for(i = 0; i < size; ++i){
    int value;
    cin >> value;
    numbers.push_back(value);
  }
  for(j = 0; j < size; ++j)
    sum += numbers.at(j);
  cout << sum;
  return 0;
}
