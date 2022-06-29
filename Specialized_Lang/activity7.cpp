#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h> 
#include <cstdlib>
using namespace std;
 
int main() {
int kidsFamily1;
int kidsFamily2;
int numFamilies = 2;
float avgKidsPerFamily;
 
cout << "Enter a number: ";
cin >> kidsFamily1;
cout << "Enter a number: ";
cin >> kidsFamily2;
 
avgKidsPerFamily = (1.0 * kidsFamily1 + kidsFamily2) / numFamilies;
cout << "Average kids per family: ";
cout << avgKidsPerFamily;
 
return 0;
}
