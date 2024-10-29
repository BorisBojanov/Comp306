#include <iostream>
#include <vector>
#include <string>
#include "Time.h"
using namespace std;

struct Time {
int hour, minute;
double second;

void Time::print ();
};

void Time::print () {
Time time = *this;
cout << time.hour << ":" << time.minute << ":" << time.second << endl;
}

int main() {
Time currentTime = { 9, 14, 30.0 };
currentTime.print ();
}