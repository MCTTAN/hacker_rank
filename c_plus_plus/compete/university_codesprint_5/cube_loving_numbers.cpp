#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

/*

Notes: This code needs to be modified.
The program timed-out.

I used these resources as guides:
https://en.wikipedia.org/wiki/Inclusion%E2%80%93exclusion_principle
https://en.wikipedia.org/wiki/Primality_test

*/

long number_of_cube_lovers(int n)
{
    long counter = 0.0;

    if(n <= 1)
        return counter;

    // Find prime numbers. Ignore duplicate counts (ex. 2^3 * 8 == 4^3 * 1).

    for(long prime = 2; prime <= n; ++prime) // Let's say prime == 50.
    {
        if(prime == 2 || prime == 3)
          counter += (n/pow(prime, 3.0));

        else if(prime % 2 == 0)
          counter += (n/pow(2 * prime, 3.0));

        else if(prime % 3 == 0)
          counter += (n/pow(3 * prime, 3.0));

        else if(prime == 5 || prime == 7)
          counter += (n/pow(prime, 3.0));

        long i = 5;

        while(i <= floor(sqrt(prime)))
        {
            if(prime % i == 0)
              counter += (n/pow(i * prime, 3.0));

            else if(prime % (i + 2) == 0)
              counter += (n/pow((i + 2) * prime, 3.0));

            i += 6;
        }
    }

  return counter;
}

int main()
{
  int t; // number of test cases
  int n; // cube-loving numbers must be <= n

  cin >> t;

  for(int i = 0; i < t; ++i)
  {
    cin >> n;
    cout << number_of_cube_lovers(n) << endl;
  }

  return 0;
}
