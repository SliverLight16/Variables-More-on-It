#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h> 
#include <cstdlib>
using namespace std;
 
int main() {
int userMinutes;
int outHours;
int outMinutes;
 
cout << "Enter a number: ";
cin >> userMinutes;
 
outHours = userMinutes / 60;
outMinutes = userMinutes % 60;
 
cout << userMinutes;
cout <<  " minutes is ";
cout <<  outHours;
cout <<  " hours and ";
cout << outMinutes;
cout << " minutes.\n";
 
return 0;
}
