# cgunits
Fork of the Calum Grant Unit library, adapted for C++17 constexpr

The CG units library is a lightweight unit library, less complete than boost::units, but very easy to use. 
The original CG units has disappeared from the Internet. This fork tries to keep the library alive and useful with modern C++.

# Example
```
#include <iostream>

#include "units.hpp"

using namespace units::values;
using namespace units::constants;
using namespace std;

int main()
{
    nautical_mile dist(450);
    knot groundspeed(270);
    cout << "We need to travel " << dist << ", which is " << mile(dist) << endl;
    cout << "At " << groundspeed << ", which is " << kph(groundspeed) << ", it takes " << hour(dist/groundspeed)
    << " to get there, or " << minute(dist/groundspeed) << endl;

    cout << "We could be much quicker at the speed of light: " << c << endl;
    return 0;
}

```
compiled with `clang++ -std=c++17 main.cpp`, this prints:
```
We need to travel 450 nautical miles, which is 517.851 miles
At 270 knots, which is 500.04 km/h, it takes 1.66667 hours to get there, or 100 minutes
We could be much quicker at the speed of light: 2.99792e+08 m/s
```

# Compatibility
The library is tested to work with these toolsets:
* clang 6 on Ubuntu 18.04 LTS
* clang 3.4 on Ubuntu 14.04 LTS
* XCode 10.1 on macOS 10.13.6
* Visual C++ 2017 15.9 on Windows 10 1803

# Users
This or earlier versions of CG units are used in:
* X-Plane 11
* X-Plane 10
* JRollon CRJ-200
* FlightFactor 777
* FlightFactor 757
* X-CIVA
