#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h> 
#include <cstdlib>
using namespace std;
 
int main() {
int randomVal;
 
srand(5);
 
randomVal = rand() % 6;
 
cout << randomVal;
 
randomVal = rand() % 6;
 
cout << randomVal;
 
randomVal = rand() % 6;
 
cout << randomVal;
 
return 0;
}
