// rational.cpp

#include <stdlib.h>   // for abs()
#include <iostream>
#include "rational.h"

using namespace std;

// Euclid's GCD algorithm
int gcd(int j, int k)
{
	int r = 1;
	
	if (j > k)
	{
		int temp = j;
		j = k;
		k = temp;
	}

	while (r > 0)
	{
		r = k % j;
		k = j;
		j = r;
	}

	return k;
}

Rational::Rational(int n, int d)
{
    int g;

    if (n != 0)
    {
	g = gcd(abs(n), abs(d));
	num = n / g;
	den = d / g;

	if (den < 0)
	{
	    den = -den;
	    num = -num;
	}
    }
    else
    {
	num = 0;
	den = 1;
    }
}

Rational::Rational(const Rational &source)
{
	num = source.num;
	den = source.den;
}

void Rational::operator=(const Rational &source)
{
    num = source.num;
    den = source.den;
}
	
Rational Rational::operator+(const Rational& other)
{
	int n = num * other.den + other.num * den;
	int d = den * other.den;
	return Rational(n, d);
}

Rational Rational::operator-(const Rational& other)
{
	// FILL CODE HERE
  int n = num * other.den - other.num * den;
  int d = den * other.den;	
  return Rational(n,d);
}

Rational Rational::operator*(const Rational& other)
{
	// FILL CODE HERE
  int n = num * other.num;
  int d = den * other.den;
  return Rational(n,d);
}

Rational Rational::operator/(const Rational& other)
{
	// FILL CODE HERE
  int n = num / other.num;
  int d = den / other.den;
  return Rational(n,d);
}

bool Rational::operator<(const Rational& other)
{
	return num * other.den < other.num * den;
}

bool Rational::operator>(const Rational& other)
{
		// FILL CODE HERE
  return num * other.den > other.num * den;
}

bool Rational::operator<=(const Rational& other)
{
		// FILL CODE HERE
  return num * other.den <= other.num * den;
}

bool Rational::operator>=(const Rational& other)
{
		// FILL CODE HERE
  return num * other.den >= other.num * den;		
}

bool Rational::operator==(const Rational& other)
{
		// FILL CODE HERE
  return num * other.den == other.num * den;		
}

bool Rational::operator!=(const Rational& other)
{
		// FILL CODE HERE
  return num * other.den != other.num * den;		
}

string Rational::str()
{
	char temp[25];
	
        sprintf(temp, "%d/%d", num, den);
	
	return string(temp);
}

ostream& operator<<(ostream &os, Rational &r)
{
	os << r.getNum() << "/" << r.getDenom();
	return os;
}
