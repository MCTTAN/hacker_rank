#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  int test_cases;
  vector<int> deletions;
  cin >> test_cases;
  while(test_cases != 0){
    string input;
    cin >> input;
    int delete_count = 0;
    for(int i = 1; i < input.length(); ++i)
      if(input.at(i) == input.at(i - 1))
        ++delete_count;
    deletions.push_back(delete_count);
    --test_cases;
  }
  for(int i = 0; i < deletions.size(); ++i
    cout << deletions.at(i) << endl;
  return 0;
}
