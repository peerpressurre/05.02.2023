#include <iostream>
#include "string_lib.h"
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

char* mystrstr(char* str1, char* str2)
{
	int counter = 0;
	int i, j, temp = 0;
	for (size_t i = 0; i < mystrlen(str2); i++)
	{
		for (size_t j = temp; j < mystrlen(str1); j++)
		{
			if (str2[i] == str1[j])
			{
				counter++;
				temp = j + 1;
				if (counter == 2 && counter > 0)
				{
					return j - 1;
					break;
				}
				break;
			}
			else
			{
				counter = 0;
			}
		}
	}
	if (counter < 2 && counter < 0)
	{
		return 0;
	}
}


// gets_s()
int main()
{
	const int size = 20;
	char s = 's';
	const char str[size] = "hello bim";
	const char str2[20]= "two";
	char str1[size] = "one ";
	char strs[size] = "puras";

	cout << "Mystrlen: " << mystrlen(str) << endl;
	cout << "Mystrcpy str2: " << str2 << endl;
	cout << "Mystrcpy str1: " << mystrcpy(str1, str2) << endl;
	cout << "Mystrcat: " << mystrcat(str1, str2) << endl;
	char* ptr = mystrchr(strs, s);
	if (ptr != nullptr)
	{
		int index = ptr - strs;
		cout << "Mystrchr: " << strs << "\t" << index << endl;
	}
    return 0;
}