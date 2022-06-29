#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h> 
#include <cstdlib>
using namespace std;
 
int main() {
int kidsFam1;
int kidsFam2;
int numFams;
int avgKidsPerFam;
 
cout << "Enter a number: ";
cin >> kidsFam1;
cout << "Enter a number: ";
cin >> kidsFam2;
 
numFams = 2;
 
avgKidsPerFam = (kidsFam1 - kidsFam2) / numFams;
 
cout << "Average kids per family is ";
cout << avgKidsPerFam;
 
return 0;
}
