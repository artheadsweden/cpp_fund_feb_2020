#include <iostream>

using namespace std;

class Temperature
{
public:
    Temperature();
    Temperature(double t);
    Temperature(const Temperature &other);
    double get_farenheit();
    double get_celsius();
    void set_temp(double t);
    Temperature operator+(const Temperature &other);
    Temperature operator-(const Temperature &other);
    Temperature operator*(const Temperature &other);
    Temperature operator/(const Temperature &other);
    friend Temperature operator+(const double &first, const Temperature &other);
    friend Temperature operator-(const double &first, const Temperature &other);
    friend Temperature operator*(const double &first, const Temperature &other);
    friend Temperature operator/(const double &first, const Temperature &other);

private:
    double temp;
};

Temperature::Temperature() : temp(0.0) {}

Temperature::Temperature(double t) : temp(t) {}

Temperature::Temperature(const Temperature &other) : temp(other.temp) {}

double Temperature::get_farenheit()
{
    return temp * 9 / 5 + 32;
}

double Temperature::get_celsius()
{
    return temp;
}

void Temperature::set_temp(double t)
{
    temp = t;
}

Temperature Temperature::operator+(const Temperature &other)
{
    return Temperature(temp + other.temp);
}

Temperature Temperature::operator-(const Temperature &other)
{
    return Temperature(temp - other.temp);
}

Temperature Temperature::operator*(const Temperature &other)
{
    return Temperature(temp * other.temp);
}

Temperature Temperature::operator/(const Temperature &other)
{
    return Temperature(temp / other.temp);
}

Temperature operator+(const double &first, const Temperature &other)
{
    return Temperature(first + other.temp);
}

Temperature operator-(const double &first, const Temperature &other)
{
    return Temperature(first - other.temp);
}

Temperature operator*(const double &first, const Temperature &other)
{
    return Temperature(first * other.temp);
}

Temperature operator/(const double &first, const Temperature &other)
{
    return Temperature(first / other.temp);
}

int main()
{
    Temperature t1 = Temperature(25.4);
    Temperature t2 = Temperature(14.9);
    Temperature t3 = 8.5 + t1;
    t2.set_temp(15.6);
    cout << t2.get_celsius() << endl;
    cout << t3.get_celsius() << endl;
    return 0;
}