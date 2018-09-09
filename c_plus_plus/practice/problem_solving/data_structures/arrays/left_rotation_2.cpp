#include <iostream>
#include <vector>
using namespace std;

/*
Note: This code passes the runtime test.
*/

void list_rotation(vector<int> v, int left_rotations)
{
  left_rotations %= v.size();

  for(int i = left_rotations; i < v.size(); ++i)
    cout << v.at(i) << " ";

  for(int j = 0; j < left_rotations; ++j)
    cout << v.at(j) << " ";

  return;
}

int main()
{
  int n; // number of integers
  int d; // number of left rotations
  int value; // value to add to the list
  vector<int> list;

  cin >> n >> d;
  while(n != 0)
  {
    cin >> value;
    list.push_back(value);
    --n;
  }

  list_rotation(list, d);

  return 0;
}
