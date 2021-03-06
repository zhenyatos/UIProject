#pragma once
#include <iostream>

class Integer 
{
private:
	int i;

public:
	explicit Integer(int i = 0);
	Integer(const Integer& other);
	Integer& operator= (const Integer& other);
	Integer& operator= (int value);
	~Integer() = default;

	Integer& operator+=(const Integer& other);
	Integer& operator-=(const Integer& other);
	Integer& operator*=(const Integer& other);
	Integer& operator/=(const Integer& other);
	Integer& operator%=(const Integer& other);
	Integer operator-();

	bool operator==(const Integer& other) const;
	bool operator!=(const Integer& other) const;
	bool operator>(const Integer& other) const;
	bool operator>=(const Integer& other) const;
	bool operator<(const Integer& other) const;
	bool operator<=(const Integer& other) const;

	bool operator==(int value) const;
	bool operator!=(int value) const;
	bool operator>(int value) const;
	bool operator>=(int value) const;
	bool operator<(int value) const;
	bool operator<=(int value) const;

	explicit operator int() const;
	friend std::ostream& operator<<(std::ostream& stream, const Integer& integer);
	friend std::istream& operator>>(std::istream& stream, Integer& integer);
};

Integer operator+(Integer a, const Integer& b);
Integer operator-(Integer a, const Integer& b);
Integer operator*(Integer a, const Integer& b);
Integer operator/(Integer a, const Integer& b);
Integer operator%(Integer a, const Integer& b);
Integer GCD(Integer a, Integer b);