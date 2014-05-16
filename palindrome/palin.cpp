/*
Program: palin.cpp
Author:  Paola Socorro
Project:   Project 3
Date:    May 15, 2014
*/

#include <iostream>
#include <string>

using namespace std;

char lowercaseCon(char input [50])
{
	for (int i=0; i<strlen(input);i++)
	{
		//x=input[i]; //testing for loop
		if(input[i]>='A' && input[i]<='Z')
		{
		 //cout<<input[i]<<endl; //char before conversion
		 input[i]=input[i]+'a'-'A';
		 //cout<<input[i]<<endl; //char after conversion
		}
		//cout<<x<<endl;  // print single charactervalue.
	}
	
	return input[50];
}
char removeSpace(char input[50])
{
	char result[50];
	int index=0;
	for(int i=0; i<strlen(input);i++)
	{
		result[i]=input[i];
		if(input[i]==' ')
		{
			for(int j=i; j<strlen(input);j++)
			{
				result[j]=input[i++];
			}
		}
		
		
		cout<<result[50];
	
	}
	
	return result[50];
}

int main()
{
	char line[50];
	cout<<"Enter a palindrome"<<endl;
	cin.getline(line,50);
	line[50]=lowercaseCon(line);
	line[50]=removeSpace(line);
	int len=strlen(line);

	bool flag=true;

	for(int i=0; i!=len/2;i++)
	{
		if(flag)
		{
			if(line[i]!=line[len-i-1])
			{
				flag=false;
			}
		}
		else
			break;
	}

	if(flag)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not a Palindrome"<<endl;
	cin.get();
	return 0;
}


