#include <iostream>
#include <Windows.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
int StringLenth(char str[]);

void to_lower(char str[]);
void to_upper(char str[]);
void shrink(char str[]);
int is_palindrome(char str[]);
int is_int_number(char str[]);

void main()
{
	setlocale(LC_ALL, "");

	'\0';
	//char str[] = { 'H','e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	//cout << str << endl;

	const int SIZE = 256;
	char str[SIZE] = {};
	cout << "Enter the word by using the CAPITAL letters: "; //cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	//cout << str << endl;
	cout << "The string's size is: " << StringLenth(str) << endl << endl;
	cout << "The function called \"to_lower\" is done: " << endl;
	to_lower(str);
	cout << str << endl << endl;
	cout << "The function called \"to_upper\" is done: " << endl;
	to_upper(str);
	cout << str << endl << endl;
	//cout << " Хорошо     живет    на    свете Винни     Пух";
	//shrink(str);
	cout << "Enter the word to know if this word is polindrom : "; cin >> str;
	if (is_palindrome(str) == true) { cout << "the word " << str << " is a polindrome." << endl; }
	else
	{
		cout << "the word " << str << " isn't a polindrome." << endl;
	}
	cout << "Enter the value or text: "; cin >> str;
	is_int_number(str);
	cout << endl;
}
int StringLenth(char str[])
{
	int times = 0;
	for (int i = 0; i < str[i] ; i++)
	{
		times++;
	}
	return times;
}
void to_lower(char str[])
{
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
		}
		else str[i] -= 'A' - 'a';
	}
}
void to_upper(char str[])
{
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
	 else str[i] -= 'a' - 'A';
	}
}
void shrink(char str[]) // не получилось!
{
	for (int i = 0; i < str[i]; i++)
	{

	}
}
int is_palindrome(char str[])
{
	int lenth = StringLenth(str);
	for (int i = 0; i < lenth / 2; ++i)
	{
		if (str[i] != str[lenth - i - 1])
		{
			return false;
		}
	}
	return true;
}
int is_int_number(char str[])
{
	int lenth = StringLenth(str);
	int a = (str[0] /= 1);
	for (int i = 0; i <lenth; i++)
		if (str[i] == a) { system("pause"); cout << "OK"; }
	else cout << "wrong";
	return str[0]; 
}