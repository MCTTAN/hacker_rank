#include <iostream>
#include <cmath>
using namespace std;

int alice = 0, bob = 0;

void compare(int a, int b)
{
    if(a > b)
        alice += 1;
    
    else if(a < b)
           bob += 1;
        
    return;
}

int main(){
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    
    compare(a0, b0);
    compare(a1, b1);
    compare(a2, b2);
    
    cout << alice << " " << bob;
    
    return 0;
}
