// James Le
// CS 173 - Ashwin Lall
// 03/13/2015
// Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Complex
{
 private:
	float real;
	float imag;
 public:
	// Constructor
	Complex(void);

	// Destructor
	~Complex(void);

	// Copy constructor
	Complex (const Complex &c);

	// Specify a new Complex type by with real and imaginary components
	Complex (float a, float b);

	// Addition operator
	Complex operator+ (const Complex &c);
	Complex operator+ (float number);

	// Subtraction operator
	Complex operator- (const Complex &c);
	Complex operator- (float number);

	// Multiplication operator
	Complex operator* (const Complex &c);
	Complex operator* (float number);

	// Division operator
	Complex operator/ (const Complex &c);
	Complex operator/ (float number);

	// Assignment operator
	Complex operator=(const Complex &c);

	// Conjugate operator
	Complex operator~ (void);

	// Exponentiation operator
	Complex operator^ (int number);

	// Return the complex
	float getReal() const {return real;}
	float getImag() const {return imag;}

	// Convert complex to a string representation
	string str();
};
 // Print a complex number as a string
 std::ostream& operator<< (std::ostream &os, const Complex &c);

#endif

	
