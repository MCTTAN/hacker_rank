#include <iostream>
#include <vector>
using namespace std;

/*
Note: This code doesn't pass the runtime test.
*/

vector<int> list_rotation(vector<int> v, int left_rotations)
{
  if(left_rotations == 0)
    return v;

  v.push_back(v.at(0));
  v.erase(v.begin());

  return list_rotation(v, left_rotations - 1);
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

  list = list_rotation(list, d);

  for(int i = 0; i <= list.size() - 1; ++i)
    cout << list.at(i) << " ";

  return 0;
}
