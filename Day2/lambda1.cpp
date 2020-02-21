#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 15;

    auto f = [&x, &y](int a, int b) {
        return a * b * x * y;
    };
    cout << f(5, 6) << endl;

    return 0;
}