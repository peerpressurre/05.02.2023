#include <iostream>
#include "string_lib.h"
#include <cstring>
#include <stdio.h>

using namespace std;
//
//int mystrlen(const char* str)
//{
//	int i = 0;
//	int counter = 0;
//	while (str[i] != '\0')
//	{
//		counter++;
//		i++;
//	}
//	return counter;
//}
//
//char* mystrcpy(char* str1, const char* str2)
//{
//	int i = 0;
//	while (str2[i] != '\0')
//	{
//		str1[i] = str2[i];
//		i++;
//	}
//	str1[i] = '\0';
//	return str1;
//}
//
//char* mystrcat(char* str1, const char* str2)
//{
//	int i = 0;
//	int j = mystrlen(str1);
//	while (str2[i] != '\0')
//	{
//		str1[j] = str2[i];
//		i++;
//		j++;
//	}
//	str1[j] = '\0';
//	return str1;
//}
//
//char* mystrchr(char* str, char s)
//{
//	int i = 0;
//	for (; i < mystrlen(str); i++)
//	{
//		if (str[i] == s)
//		{
//			return &str[i];
//			break;
//		}
//	}
//	return nullptr;
//}
//
//
//char* mystrstr(char* str1, char* str2) {
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	for (int i = 0; i <= len1 - len2; i++) {
//		bool match = true;
//		for (int j = 0; j < len2; j++) {
//			if (str1[i + j] != str2[j]) {
//				match = false;
//				break;
//			}
//		}
//		if (match) {
//			return &str1[i - 1];
//		}
//	}
//
//	return nullptr;
//}

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