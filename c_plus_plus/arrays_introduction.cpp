#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> numbers;
  int size;
  cin >> size;
  while (size != 0){
    int value;
    cin >> value;
    numbers.push_back(value);
    --size;
  }
  for(int i = numbers.size() - 1; i >= 0; --i)
    cout << numbers.at(i) << " ";
  return 0;
}
