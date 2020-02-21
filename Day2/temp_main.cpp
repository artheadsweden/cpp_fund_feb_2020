#include <iostream>
#include "temperature.h"

using namespace std;

int main()
{
    Temperature t1(34.5);
    Temperature t2(24.7);
    Temperature t3 = t1 * t2;
    cout << t1.get_celsius() << endl;
    cout << t2.get_celsius() << endl;
    cout << t3.get_celsius() << endl;
    return 0;
}