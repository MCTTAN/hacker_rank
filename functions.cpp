#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> numbers;
  for(int i = 0; i < 4; ++i){
    int value;
    cin >> value;
    numbers.push_back(value);
  }
  int max = numbers.at(0);
  for(int j = 1; j < 4; ++j)
    if(numbers.at(j) > max
      max = numbers.at(j);
  cout << max;
  return 0;
}
