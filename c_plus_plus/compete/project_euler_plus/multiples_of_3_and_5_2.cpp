#include <iostream>
#include <cmath>
using namespace std;

long sum(int n)
{
  long numMultiples3 = (n - 1) / 3;
  long numMultiples5 = (n - 1) / 5;
  long numMultiples15 = (n - 1) / 15;

  long summation3 = 3 * numMultiples3 * (numMultiples3 + 1)/2;
  long summation5 = 5 * numMultiples5 * (numMultiples5 + 1)/2;
  long summation15 = 15 * numMultiples15 * (numMultiples15 + 1)/2;

  return (summation3 + summation5 - summation15);
}

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        
        cout << sum(n) << endl;
    }
    
    return 0;
}
