#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

/*
Note: This program fails to pass the test cases.
Returns wrong answer. Fix code later.
*/

vector<int> new_list(vector<int> x, vector<int> y, int z)
{
  vector<int> list;
  
  for(int i = 0; i < min(x.size(), y.size() - z); ++i)
  {
    for(int j = (i + z); j < y.size(); ++j)
    {
      list.push_back(x.at(i) * y.at(j));
    }
  }
  
  return list;
}

int kth_smallest(vector<int> v, int k)
{
  vector<int> list = v;
  sort(list.begin(), list.end());
  return list.at(k - 1);
}

int main()
{
  int n;
  int m;
  int x;
  int k;
  int value;
  vector<int> combined_list;
  

  cin >> n >> m >> x >> k;
  
  vector<int> a(n);
  vector<int> b(m);

  for(int i = 0; i < n; ++i)
  {
    cin >> value;
    a.at(i) = value;
  }

  for(int j = 0; j < m; ++j)
  {
    cin >> value;
    b.at(j) = value;
  }

  combined_list = new_list(a, b, x);
  
  cout << kth_smallest(combined_list, k) << endl;
 
  return 0;
}
