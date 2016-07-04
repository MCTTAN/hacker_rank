#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<long long int> numbers;
  long long int size, sum, i, j;
  
  cin >> size;
  
  for(i = 0; i < size; ++i)
  {
    long long int value;
    
    cin >> value;
    
    numbers.push_back(value);
  }
  
  for(j = 0; j < size; ++j)
  {
    sum += numbers.at(j);
  }
  
  cout << sum;
  
  return 0;
}
