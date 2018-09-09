#include <iostream>
#include <stdbool.h>
using namespace std;

/*
LOL, C++ only accepts "true" and "false", not "TRUE" and "FALSE".
*/

int main()
{
  int driver_speed = 0;
  int fine = 0;
  bool warning = false;
  bool remove_license = false;
  
  cin >> driver_speed;

  if((driver_speed >= 91) && (driver_speed <= 110))
  {
    fine = (driver_speed - 90) * 300;
    warning = true;
  }

  else if(driver_speed > 110)
  {
    fine = (driver_speed - 90) * 500;
    remove_license = true;
  }

  /*
  else if(driver_speed <= 90)
  {
    // no punishment, no fine, no license removal
  }
  */

  if(fine != 0)
  {
    cout << fine << " ";

    if(warning == true)
      cout << "Warning";

    if(remove_license == true)
      cout << "License removed";
  }

  else 
  {
    cout << "0 No punishment";
  }
  
  return 0;
}
