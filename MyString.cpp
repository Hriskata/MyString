#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"

MyString::MyString() : myString{ nullptr }
{
	myString = new char[1];
	myString = nullptr;
}

MyString::MyString(const char* other)
{
	size_t size_other = strlen(other);
	myString = new char[size_other+1];	
	for (size_t i = 0; i < size_other; i++)
	{
		
		myString[i] = other[i];
		
	}
	myString[size_other] = '\0';
	
}

MyString::MyString(const MyString& othеr)
{
	size_t size_other = strlen(othеr.myString);
	myString = new char[size_other+1];
	for (size_t i = 0; i < size_other; i++)
	{
		myString[i] = othеr.myString[i];
	}
	myString[size_other] = '\0';

}

MyString::~MyString()
{
	delete[] myString;
}

MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		this->~MyString();
		myString = new char[strlen(other.myString) + 1];
		strcpy(myString, other.myString);
		
	}
	return *this;

}

char& MyString::operator[](int index) const
{
	return myString[index];
}

size_t MyString::size() const
{
	return strlen(myString);
}

std::ostream& operator<<(std::ostream& os, const MyString& str)
{
	os << str.myString;
	return os;
}
