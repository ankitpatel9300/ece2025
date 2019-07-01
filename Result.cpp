/*
 * Result.cpp
 *
 *  Created on: Jun. 30, 2019
 *      Author: ankit
 */
#include<iostream>
#include<iomanip>
#include "Result.h"
using std::string ;    using std::cout;   using std::cin;
using std::endl;       using std::cerr;

Result::Result(string name)          //Result constructor
{
   setCourseName(name);
}

void Result::setCourseName(string name)
{
	if(name.size()<=25)
	{
		courseName=name;
	}
	else
	{
		courseName=name.substr(0,25);
		cerr<<"Name \""<<name<<"\" exceeds maximum length(25)\n"
				<<"limiting Name to First 25 characters \n"<<endl;
	}
}

string Result::getCourseName() const
{
  return courseName;
}

void Result::displayMessage() const
{
	cout<<"Welcome to Result of "<<getCourseName()<<"!\n"<<endl;
}
void Result::calculateResultAverage() const
{
	int total=0;
	unsigned int gradeCounter=0;

	cout<<"Enter Grade or -1 to Quite"<<endl;
	int grade=0;
	cin>>grade;

	while(grade != -1)
	{
		total=total+grade;
		gradeCounter=gradeCounter+1;
	    cout<<"Enter Grade or -1 to Quite\n"<<endl;
	    cin>>grade;

	}

	if(gradeCounter !=0)
	{
		double average =static_cast<double>(total)/gradeCounter;
		cout<<std::setprecision(4)<<std::fixed;
		cout<<"Total of All "<<gradeCounter<<" Grade entered is "<<total<<endl;
		cout<<" Class average is "<<average<<endl;
	}
	else
	{
		cout<<" No grade Entered"<<endl;
	}


}

