#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
 
int main() {
float initMass;
float growthRate;
float yearsGrow;
float finalMass;
 
cout << "Enter a number: ";
cin >> initMass;
 
// Get growth rate. Ex 0.05 is 5%/year
cout << "Enter a number: ";
cin >> growthRate;
 
cout << "Enter a number: ";
cin >> yearsGrow;
 
//Ex. Rate of 0.05 yields initMass *1.05*yearsGrow
finalMass = initMass * pow(1.0 + growthRate, yearsGrow);
 
cout << "Final Mass after ";
cout << yearsGrow;
cout << " years is: ";
cout << finalMass;
 
return 0;
}
