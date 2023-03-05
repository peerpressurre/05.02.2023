#include <iostream>
#include "string_lib.h"
#include <cstring>
#include <stdio.h>

using namespace std;

int mystrlen(const char* str)
{
	int i = 0;
	int counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return counter;
}

char* mystrcpy(char* str1, const char* str2)
{
	int i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return str1;
}

char* mystrcat(char* str1, const char* str2)
{
	int i = 0;
	int j = mystrlen(str1);
	while (str2[i] != '\0')
	{
		str1[j] = str2[i];
		i++;
		j++;
	}
	str1[j] = '\0';
	return str1;
}

char* mystrchr(char* str, char s)
{
	int i = 0;
	for (; i < mystrlen(str); i++)
	{
		if (str[i] == s)
		{
			return &str[i];
			break;
		}
	}
	return nullptr;
}

//char* mystrstr(char* str1, char* str2, int j)
//{
//	int counter = 0;
//	int i, temp = 0;
//	for ( i = 0; i < mystrlen(str2); i++)
//	{
//		for ( j = temp; j < mystrlen(str1); j++)
//		{
//			if (str2[i] == str1[j])
//			{
//				counter++;
//	            temp = j ++;
//				if (counter == 2 && counter > 0)
//				{
//					return j;
//					break;
//				}
//				break;
//			}
//			else
//			{
//				counter = 0;
//			}
//		}
//	}
//	if (counter < 2 && counter < 0)
//	{
//		return 0;
//	}
//}

char* mystrstr(char* str1, char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	for (int i = 0; i <= len1 - len2; i++) {
		bool match = true;
		for (int j = 0; j < len2; j++) {
			if (str1[i + j] != str2[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			return &str1[i - 1];
		}
	}

	return nullptr;
}

// gets_s()
int main()
{
	const int size = 20;
	char s = 's';
	const char str[size] = "hello bim";
    char str2[20]= "pur";
	char str1[size] = "one bom purr";
	char strs[size] = "trs";

	
	char* ptr = mystrchr(strs, s);
	if (ptr != nullptr)
	{
		int index = ptr - strs;
		cout << "Mystrchr: " << strs << "\t" << index << endl;
	}
	char* ptr1 = mystrstr(str1, str2);
	if (ptr1 != nullptr)
	{
		int index = ptr1 - str1;
		cout << "Mystrstr: " << str1 << "\t" << index + 1 << endl;
	}
	//cout << "Mystrstr: " << mystrstr(str1, str2) << endl;
	/*cout << "Mystrlen: " << mystrlen(str) << endl;
	cout << "Mystrcpy str2: " << str2 << endl;
	cout << "Mystrcpy str1: " << mystrcpy(str1, str2) << endl;
	cout << "Mystrcat: " << mystrcat(str1, str2) << endl;*/
	
	int switch_on;
	cout << "------Choose function------" << endl;
	cout << "|     1 - mystrlen        |" << endl;
	cout << "|     2 - mystrcpy        |" << endl;
	cout << "|     3 - mystrcat        |" << endl;
	cout << "|     4 - mystrchr        |" << endl;
	cout << "|     1 - mystrstr        |" << endl;
	cout << "---------------------------" << endl;

	switch (switch_on)
	{
	case1:
	{
			const int size = 100;
			const char* str = new char[size];
			cout << "Enter string: ";
			gets_s(str, size);
			cout << "Mystrlen: " << mystrlen(str) << endl;
	}
	default:
		break;
	}



	
    return 0;
}