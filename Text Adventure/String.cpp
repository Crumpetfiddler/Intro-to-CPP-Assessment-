#include "String.h"
#include <iostream>
//#include <string>

using namespace std;



 String::String(char* string)
 {
	 char* newString = new char[strlen(string)+1];
	 newString[0] = '\0';
	 strcpy(newString, string);
	 m_string = newString;
 }

 String::~String()
 {
	 if (m_string != nullptr)
	 {
		 delete[] m_string;
	 }
 }

 String::String(String& string) 
 {
	 char* newString = new char[string.Length() + 1];
	 newString[0] = '\0';
	 //strcpy(newString, string);
	 //make a loop that iterates through all character values, from index 0 to \0
	 for (int i = 0; i < string.Length(); i++) {
		 newString[i] = string.getCharacter(i);
		 newString[i+1] = '\0';
	 }
	 m_string = newString;
 }

 ////1. The ability to query the string�s length, returning an integer
 const int String::Length()
 {
	 return strlen(m_string);
 }

 //2. The ability to access a character at a certain index within the string class
 const char String::getCharacter(int index)
 {
	 return m_string[index];
 }

 // 3 The ability to compare if the string is the same as another string class
 bool String::Compare(char* String)
 {
	 return strcmp(m_string, String);
}


// 4 The ability to append one string to another
void String::Append(String String)
{

	char* N_String = new char[strlen(m_string) + String.Length() + 1];
	N_String[0] = '\0';
	strcpy(N_String, m_string);
	strcat(N_String, String.GetString());

	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	m_string = N_String;



}
// 5 The ability to prepend one string to another
void String::Prepend(String String)
{

	char* N_String = new char[strlen(m_string) + String.Length() + 1];
	N_String[0] = '\0';
	strcpy(N_String, String.GetString());
	strcat(N_String, m_string);

	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	m_string = N_String;
}

// 6 returns a basic c style string
const char* String::GetString()
{
	return m_string;
}

// 7 The ability to convert the string to a duplicate containing all lowercase letters
char String::lowerCase()
{
	int i = 0;
	char c;
	while (m_string[i] >= '\0')
	{
		c = m_string[i];
		putchar(tolower(c));
		i++;
	}
	return c;
}

// 8 The ability to convert the string to a duplicate containing all uppercase letters
char String::upperCase()
{
	int i = 0;
	char c;
	while (m_string[i] >= '\0')
	{
		c = m_string[i];
		putchar(toupper(c));
		i++;
	}
	return c;
}

// 9 The ability to find a sub-string within the string class
int String::subStringCheck(char* string)
{
	//	 int index = 0;

	for (int i = 0; i < Length(); i++)
	{
		int j = 0;

		while (getCharacter(i) == string[j])
		{
			j++;
			i++;
			if (j = strlen(string))
			{
				return i - j;
			}
		}
	}
}
int String::subStringCheckIndex(String c, int start) // 10 The ability to find a sub-string within the string class, starting from a certain index within the string

{
	int i = start, j = 1;

	bool IsTrue = false;

	while (i < Length())	//c = string
	{
		
		if (m_string[i] == c.getCharacter(0))
		{
			while (j < c.Length())
			{
				if (m_string[i+j] == c.getCharacter(j))
				{
					IsTrue = true;
				}
				else
				{
					IsTrue = false;
					break;
				}
				j++;
			}
			// loops done and all are the same
			break;
		}
		else
		{
			IsTrue = false;
		}
		i++;
	}
	return i;
}


	 
char String::stringReplace(String c, int start)// 11 The ability to replace a sub - string found within the string with a different sub - string
{
	return 0;
}

void String::setString()
{

	String test;
	getline(std::cin, test);
	int length = strlen(test);


	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	//m_string = temp;
}



	//(N_String, String.GetString());
	//.r
	//strcat(N_String, m_string);

	//if (m_string != nullptr)
	//{
	//	delete[] m_string;
	//}
	//m_string = N_String;


	//StringOne = "Hello, this is a string"
	//If you want to replace "this is a" with "this is not a"
	//the could should look something like:
	//StringOne.Replace(7, 9, "this is not a")



	//int index = 0;


	 //	// "Hello y0u\0"
	 //	// find = "y0u\0#####"
	 //	// "olle#"

	 //int index = find - m_string;

	 //	// index = 6
	 //	// strlen(m_string) = 9
	 //	// strlen(string) = 3
	 //	// strlen("olleh") = 5
	 //	// 9 - 3 + 5 = 11
	 //	// 11 > 9?
	 //	// "Hello olleh\0"

	 //	//strncpy(find, "olleh", 5);
	 //}



//sets m_string to equal the null pointer
String::String()
{
	m_string = nullptr;
}



// outputting method
void String::print()
{
	if (m_string == nullptr)
	{
		std::cout << "null";
	}
	else
	{
		std::cout << m_string << std::endl;
	}
}
