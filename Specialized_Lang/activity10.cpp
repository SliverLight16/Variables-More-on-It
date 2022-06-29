#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
int secBetween;
int timeInHours;
int disInMiles;
const int SEC_PER_HOUR = 3600;
const float SOUND_SPEED = 761.207;
// Get seconds between lightning and thunder
cout << "Enter a number";
cin >> secBetween;
timeInHours = secBetween * SEC_PER_HOUR;
disInMiles = SOUND_SPEED * timeInHours;
cout << "Miles from lightning strike";
cout << disInMiles;
}
