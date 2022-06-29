#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
using namespace std;
 
int main() {
int randomValue;
 
randomValue = rand() % 6;
cout << randomValue;
randomValue = rand() % 6;
cout << randomValue;
randomValue = rand() % 6;
cout << randomValue;
 
return 0;
}
