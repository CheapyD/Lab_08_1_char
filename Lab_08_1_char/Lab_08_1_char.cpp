#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* str, const char ch)
{
	char* t = new char[strlen(str)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(str + pos1, ch))
	{
			pos2 = p - str + 1;
			strncat(t, str + pos1, pos2 - pos1 - 1);
			strcat(t, "**");
			pos1 = pos2;
	}
	strcat(t, str + pos1);
	strcpy(str, t);
	return t;
}
int main()
{
	char str[101];
	char ch = '.';

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	char* dest = new char[151];
	dest = Change(str, ch);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	system("pause");
	return 0;
}
