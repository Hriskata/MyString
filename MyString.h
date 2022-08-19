#pragma once
#include <iostream>
#include <cstring>

class MyString
{
	char* myString;
public:
	MyString();
	MyString(const char* other);
	MyString(const MyString& othеr_nz);
	~MyString();
	MyString& operator=(const MyString& other);
	char& operator[](int index) const;
	size_t size() const;
	friend std::ostream& operator<<(std::ostream& os, const MyString& str);

};
