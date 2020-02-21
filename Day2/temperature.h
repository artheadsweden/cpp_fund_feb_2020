#pragma once

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