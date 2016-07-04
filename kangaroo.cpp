#include <iostream>
using namespace std;
int main(){
  bool same = false;
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  while(x1 <= 10000 || x2 <= 10000){
    if(x1 == x2){
      same = true;
      break;
    }
    x1 += v1;
    x2 += v2;
  }
  if(same)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
