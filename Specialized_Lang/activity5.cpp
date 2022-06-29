#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
using namespace std;
 
int main() {
int rowNumLeft;
int colNumLeft;
int rowNumRight;
int colNumRight;
 
rowNumLeft = rand() % 20;
colNumLeft = rand() % 15;
 
cout << "Move row";
cout << rowNumLeft;
cout << " column ";
cout << colNumLeft;
 
rowNumRight = rand() % 20;
colNumRight = rand() % 14;
 
cout << "to row ";
cout << rowNumRight;
cout << " column ";
cout << colNumRight;
 
return 0;
}
