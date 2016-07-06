#include <iostream>
#include <cstdio>
#include <cmath>
int main(){
  double meal_cost;
  int tip_percent, tax_percent;
  cin >> meal_cost >> tip_percent >> tax_percent;
  double total_cost = meal_cost + (meal_cost * static_cast<double>(tip_percent)/100) + (meal_cost * static_cast<double>(tax_percent)/100);
  cout << "The total meal cost is ";
  if(total_cost - static_cast<int>(total_cost) < 0.5)
    cout << floor(total_cost);
  else
    cout << ceil(total_cost);
  cout << " dollars."
  return 0;
}
