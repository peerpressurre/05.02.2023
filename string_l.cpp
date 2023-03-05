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
	int len1 = mystrlen(str1);
	int len2 = mystrlen(str2);

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