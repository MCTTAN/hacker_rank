#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sum;
    
    cin >> n;
    
    for(int i = 0 ; i < n; ++i)
    {
        int number;
        cin >> number;
        sum += number;
    }
    
    cout << sum;
    
    return 0;
}
