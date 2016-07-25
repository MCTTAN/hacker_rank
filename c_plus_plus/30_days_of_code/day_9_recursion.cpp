#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    int temp;
    if(n <= 1)
        return 1;
    temp = n * factorial(n - 1);
    return temp;
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
