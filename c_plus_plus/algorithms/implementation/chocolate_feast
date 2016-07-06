#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t != 0){
    int n, c, m, ate, wraps;
    cin >> n >> c >> m;
    wraps = ate = n/c;
    while(wraps >= m){
      int just_ate = wraps/m;
      ate += just_ate;
      wraps %= m;
      wraps += just_ate;
    }
    cout << ate << endl;
    --t;
  }
  return 0;
}
