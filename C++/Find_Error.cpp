#include <iostream>
#include <string>
using namespace std;
int main ()
{
  const unsigned int VALID_DASH_INDEX_1 = 4;
  const unsigned int VALID_DASH_INDEX_2 = 7; //wrong index number
  const unsigned int VALID_DATE_LENGTH = 10;
  const unsigned int MIN_VALID_DAY_NUM = 1;
  string inputDate, inputYear, inputMonth, inputDay, monthName;
  size_t dashIndex1, dashIndex2, invalidCharIndex, inputDateLength; // find function accepts size_t variables
  unsigned int yearNum, dayNum, monthNum, maxValidDayNum = 31;
  bool inputDateValid = true;
  // Get a date from the user
  cout << "Enter date in YYYY-MM-DD format: ";
  getline (cin, inputDate);
  // Check whether the input date has the correct format
  dashIndex1 = inputDate.find ("-");
  dashIndex2 = inputDate.find ("-", dashIndex1 + 1);
  invalidCharIndex = inputDate.find_first_not_of ("0123456789-");
  inputDateLength = inputDate.size ();
  if ((dashIndex1 == VALID_DASH_INDEX_1) &&
      (dashIndex2 == VALID_DASH_INDEX_2) &&
      (invalidCharIndex == string::npos) &&
      (inputDateLength == VALID_DATE_LENGTH))
    {
      inputYear = inputDate.substr (0, dashIndex1);
      inputMonth =inputDate.substr (dashIndex1 +1, dashIndex2 - dashIndex1 - 1);
      inputDay =inputDate.substr (dashIndex2 +1, inputDateLength - dashIndex2 - 1); // first argument was wrong
      // Convert the year, month and day to integers
      yearNum = stoi(inputYear);
      monthNum = stoi(inputMonth);
      dayNum = stoi(inputDay);
      // Determine the month name
      switch (monthNum)
	{
	case 1:
	  monthName = "January";
	  maxValidDayNum = 31;
	  break;
	case 2:
	  monthName = "February";
	  maxValidDayNum = 29;
	  break;
	case 3:
	  monthName = "March";
	  maxValidDayNum = 31;
	  break;
	case 4:
	  monthName = "April";
	  maxValidDayNum = 30;
	  break;
	case 5:

	  monthName = "May";
	  maxValidDayNum = 31;
	  break;
	case 6:
	  monthName = "June";
	  maxValidDayNum = 30;
	  break;
	case 7:
	  monthName = "July";
	  maxValidDayNum = 31;
	  break;
	case 8:
	  monthName = "August";
	  maxValidDayNum = 31;
	case 9:
	  monthName = "September";
	  maxValidDayNum = 30;
	  break;
	case 10:
	  monthName = "October";
	  maxValidDayNum = 31;
	  break;
	case 11:
	  monthName = "November";
	  maxValidDayNum = 30;
	  break;
	case 12:
	  monthName = "December";
	  maxValidDayNum = 31;
	  break;
	default:
	  inputDateValid = false;
	}
      // Check whether the day number is valid
      if ((dayNum < MIN_VALID_DAY_NUM) && (dayNum > maxValidDayNum))
	{
	  inputDateValid = false;
	}
    }
  else
    {
      inputDateValid = false;
    }
  // Output the date in expanded format
  if (inputDateValid)
    {
      cout << monthName << " " << dayNum << ", " << inputYear << endl;
    }
  else
    {
      cout << "Invalid date format" << endl;
    }
  return 0;
}
