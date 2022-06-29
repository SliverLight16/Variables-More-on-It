#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
float areaSquare;
float sideSquare;
 
cout << "Enter a number: ";
cin >>  areaSquare;
sideSquare = sqrt(areaSquare);
cout << "Square root of ";
cout << areaSquare;
cout <<  " is ";
cout << sideSquare;
 
return 0;
}
