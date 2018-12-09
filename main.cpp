// Example code, compile with
// clang++ -std=c++17 main.cpp
// Output:
// We need to travel 450 nautical miles, which is 517.851 statue miles
// At 270 knots, which is 500.04 km/h, it takes 1.66667 hours to get there, or 100 minutes
// We could be much quicker at the speed of light: 2.99792e+08 m/s

#include <iostream>

#define UNITS_STREAM_OUTPUT 1
#include "units.hpp"

using namespace units::values;
using namespace units::constants;
using namespace std;

int main()
{
    nautical_mile dist(450);
    knot groundspeed(270);
    cout << "We need to travel " << dist << ", which is " << statue_mile(dist) << endl;
    cout << "At " << groundspeed << ", which is " << kph(groundspeed) << ", it takes " << hour(dist/groundspeed)
    << " to get there, or " << minute(dist/groundspeed) << endl;

    cout << "We could be much quicker at the speed of light: " << c << endl;
    return 0;
}
