#include <iostream>
#include <cmath>
using namespace std;

/*
Note: This code does not pass the runtime tests.
*/

int sum_of_multiples_of_three_or_five(int n)
{
    int sum = 0;

    for(int i = 3; i < n; ++i)
        if((i % 3 == 0) || (i % 5 == 0))
          sum += i;

    return sum;
}

int main()
{
  int t; // number of test cases
  int n; // value

  cin >> t;

  while(t != 0)
  {
    cin >> n;
    cout << sum_of_multiples_of_three_or_five(n) << endl;
    --t;
  }

  return 0;
}
