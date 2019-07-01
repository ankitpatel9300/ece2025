/*
 * Result.h
 *
 *  Created on: Jun. 30, 2019
 *      Author: ankit
 */

#include<string>

class Result
{
public:

	explicit Result(std::string);                  //initialize course name
	void setCourseName (std::string);              //set course name up to 25 character
	std::string getCourseName () const;            //return course name to calling object
	void displayMessage() const;                   //displays welcome message
	void calculateResultAverage()const;            //calculate average and sum of entered grade

private:
	std::string courseName;                        //Data Member course name for this class Result

};
