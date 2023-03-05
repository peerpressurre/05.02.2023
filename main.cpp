#include <iostream>
#include "string_lib.h"
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
	int switch_on;
	cout << "------Choose function------" << endl;
	cout << "|     1 - mystrlen        |" << endl;
	cout << "|     2 - mystrcpy        |" << endl;
	cout << "|     3 - mystrcat        |" << endl;
	cout << "|     4 - mystrchr        |" << endl;
	cout << "|     5 - mystrstr        |" << endl;
	cout << "---------------------------" << endl;
	cin >> switch_on;
	switch (switch_on)
	{
	case 1:
	{
		const int size = 100;
		const char* str[100] = { "Hello world" };
		cout << "String: " << *str << endl;
		cout << "Length: " << mystrlen(*str) << endl;
	}break;
	case 2:
	{
		const int size = 100;
		const char str[size] = { "Hello world" };
		char* str2 = new char;
		cout << "Original: " << str << endl;
		cout << "Copy: " << mystrcpy(str2, str) << endl;
	}break;
	case 3:
	{
		const int size = 100;
		char str[size] = { "Hello" };
		char str2[size] = { " World" };
		cout << "String 1: " << str << endl;
		cout << "String 2:" << str2 << endl;
		cout << "Final sting: " << mystrcat(str, str2) << endl;
	}break;
	case 4:
	{
		const int size = 100;
		char str[100] = { "Hello Kitties" };
		char s = 's';
		cout << "String: " << str << endl;
		char* ptr = mystrchr(str, s);
		if (ptr != nullptr)
		{
			int index = ptr - str;
			cout << "Index of first occurance: " << index << endl;
		}
	}break;
	case 5:
	{
		const int size = 100;
		char str[size] = { "Hello" };
		char str2[size] = { "llo" };
		cout << "String 1: " << str << endl;
		cout << "String 2: " << str2 << endl;
		char* ptr1 = mystrstr(str, str2);
		if (ptr1 != nullptr)
		{
			int index = ptr1 - str;
			cout << "Index of first occurance: " << index + 1 << endl;
		}

	}break;
	default:
		break;
	}
    return 0;
}