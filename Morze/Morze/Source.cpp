#include "Header.h"
#include <string>
using namespace System;
using namespace std;

char rcharacters[42] = { 'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ж', 'З', 'И',
'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С',
'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ы', 'Ь','Ъ',
'Э', 'Ю', 'Я', '1', '2', '3', '4', '5', '6', '7',
'8', '9', '0' };
wchar_t updateChar(char ch)
{
	wchar_t r = ch;
	if (ch < 48)
	{
		int a = 1040 + 64 + ch;
		r = a;
	}
	return r;
}
string rcodeMorse[42] = { "*-", "-***", "*--", "--*",
											"-**", "*", "***-", "--**",
											"**", "*---", "-*-", "*-**",
											"--", "-*", "---", "*--*",
											"*-*", "***", "-", "**-",
											"**-*", "****", "-*-*",
											"---*", "----", "--*-",
											"-*--", "-**-","--*--", "**-**",
											"**--", "*-*-", "*----",
											"**---", "***--", "****-",
											"*****", "-****", "--***",
											"-**", "----*", "-----" };
char echaracters[36] = { 'A', 'B', 'W', 'G', 'D', 'E', 'V', 'Z', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S',
'T', 'U', 'F', 'H', 'C', 'Q', 'Y', 'X',
'1', '2', '3', '4', '5', '6', '7',
'8', '9', '0' };
string ecodeMorse[36] = { "*-", "-***", "*--", "--*",
											"-**", "*", "***-", "--**",
											"**", "*---", "-*-", "*-**",
											"--", "-*", "---", "*--*",
											"*-*", "***", "-", "**-",
											"**-*", "****", "-*-*",
											"--*-",
											"-*--", "-**-", "*----",
											"**---", "***--", "****-",
											"*****", "-****", "--***",
											"---**", "----*", "-----" };
String^ rShif(String^ text)
{
	String^ output;
	text->Length;
	for (int i = 0; i < text->Length; i++)
	{
		if (text[i] == ' ') continue;
		for (int j = 0; j < 42; j++)
		{
			wchar_t ch = updateChar(rcharacters[j]);
			if (ch == Char::ToUpper(text[i]))
			{
				String^ sl = gcnew System::String(rcodeMorse[j].c_str());
				output = output + sl + " ";
			}
		}
	}
	return output;
}
String^ rDShif(String^ text)
{

	int i = 0;
	String^ sl = "";
	String^ output = "";
	while (i < text->Length)
	{
		if (text[i] == ' ' || i == text->Length - 1)
		{
			for (int j = 0; j < 42; j++)
			{
				String^ code = gcnew System::String(rcodeMorse[j].c_str());
				if (code == sl)
				{
					wchar_t ch = updateChar(rcharacters[j]);
					output = output + Char::ToString(ch) + " ";
					break;
				}
			}
			sl = "";
		}
		else sl = sl + text[i];
		i++;
	}
	return output;
}
String^ eShif(String^ text)
{
	String^ output;
	
	for (int i = 0; i < text->Length; i++)
	{
		if (text[i] == ' ') continue;
		for (int j = 0; j < 36; j++)
		{
			if (echaracters[j] == Char::ToUpper(text[i]))
			{
				String^ sl = gcnew System::String(ecodeMorse[j].c_str());
				output = output + sl + " ";
			}
		}
	}
	return output;
}
String^ eDShif(String^ text)
{
	int i = 0;
	String^ sl = "";
	String^ output = "";
	while (i < text->Length)
	{
		if (text[i] == ' ' || i == text->Length-1)
		{
			for (int j = 0; j < 36; j++)
			{
				String^ code = gcnew System::String(ecodeMorse[j].c_str());
				if (code == sl) 
				{
					output = output + Char::ToString(echaracters[j]) + " ";
					break;
				}
					
			}
			sl = "";
		}
		else sl = sl + text[i];
		i++;
	}
	return output;
	
};


