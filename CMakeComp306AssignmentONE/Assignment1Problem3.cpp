/*
table of temperature conversions, starting from −40 degrees (both Fahrenheit and Celsius)
, and running at 5 degree intervals for 100 entries in each table.
T(F) = (T(C) * 9 / 5) + 32
T(C) = (T(F) – 32 ) * 5 / 9


The tabular output from your program should display as follows:

Temperature Conversion Tables

      Temperature      |      Temperature
       (degrees)       |       (degrees)
     F           C     |       C           F
  -40.000     -40.000  |    -40.000     -40.000
  -35.000     -37.222  |    -35.000     -31.000
  -30.000     -34.444  |    -30.000     -22.000
  -25.000     -31.667  |    -25.000     -13.000

*/
#include "Assignment1Problem3.h"
using namespace std;

void TemperatureConversionTable() {
    cout << "Temperature Conversion Tables" << endl;
    cout << "      Temperature      |      Temperature" << endl;
    cout << "       (degrees)       |       (degrees)  " << endl;
    cout << "   F           C       |    C           F  " << endl;

    for (int i = -40; i <= 100; i += 5) {
        double fahrenheit = i;
        double celsius = (fahrenheit - 32) * 5 / 9;
        cout << "  "; // Indentation for formatting to align the columns
        cout << setw(7) << fixed << setprecision(3) << fahrenheit << setw(12) << fixed << setprecision(3) << celsius << "  |  ";
        celsius = i;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << setw(7) << fixed << setprecision(3) << celsius << setw(12) << fixed << setprecision(3) << fahrenheit << endl;
    }
}

int main() {
    TemperatureConversionTable();
    return 0;
}