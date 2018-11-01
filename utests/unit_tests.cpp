//Modifying this file in any way will result in a mark of 0%
#include <iostream>
#include <regex>

#include <gtest/gtest.h>
#include "UUDate.h"

int currentPoints = 0;
int maxPoints = 100;

//Regular expression for testing dates
const std::regex verifyDate{ R"(\d{1,2}\/\d{1,2}\/\d{4})" };//

TEST(UUDatesTests, TestGetDay)
{
	std::cout << "\nRunning test TestGetDay " << std::endl;

	//Arrange
	int expected_value{ 1 };
	//Test default constructor
	UUDate defaultDate{}; //Should default to 1/1/2000

	//ACT
	int actual_value = defaultDate.GetDay();

	//Assert
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestGetDay PASSED! : GetDay returning the correct day from date object " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestGetDay FAILED : Did you set the day value correctly for default constuctor? " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;
}


TEST(UUDatesTests, TestGetMonth)
{
	std::cout << "\nRunning test TestGetMonth " << std::endl;

	//Arrange
	int expected_value{ 1 };
	//Test default constructor
	UUDate defaultDate{};

	//ACT
	int actual_value = defaultDate.GetMonth();

	//Assert
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestGetMonth PASSED! : GetMonth returning the correct month from date object " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestGetMonth FAILED : Did you set the month value correctly for default constuctor? " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestGetYear)
{
	std::cout << "\nRunning test TestGetYear " << std::endl;

	//Arrange
	int expected_value{ 2000 };
	//Test default constructor
	UUDate defaultDate{};

	//ACT
	int actual_value = defaultDate.GetYear();

	//Assert
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestGetYear PASSED! : Getyear returning the correct year from date object " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestGetYear FAILED : Did you set the year value correctly for default constuctor? " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestDefaultConstructor)
{
	std::cout << "\nRunning test  TestDefaultConstructor " << std::endl;

	//Arrange
	int expectedDay_value{ 1 };
	int expectedMonth_value{ 1 };
	int expectedYear_value{ 2000 };
	//Test default constructor
	UUDate defaultDate{};

	//Act
	int actualDayValue = defaultDate.GetDay(); //should be 1
	int actualMonthValue = defaultDate.GetMonth(); //should be 1
	int actualYearValue = defaultDate.GetYear(); //should be 2000

	//Assert
	EXPECT_EQ(expectedDay_value, actualDayValue); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonthValue); //Will continue on fail
	EXPECT_EQ(expectedYear_value, actualYearValue); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestDefaultConstructor PASSED! : The default constructor works correctly " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestDefaultConstructor FAILED : Incorrect default values for date object " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestDateConstructorValidArguments)
{
	std::cout << "\nRunning test TestDateConstructorValidArguments " << std::endl;

		//Arrange
	int expectedDay_value{ 20 };
	int expectedMonth_value{ 2 };
	int expectedYear_value{ 2019 };
	//Test default constructor
	UUDate defaultDate{20,2,2019};

	//Act
	int actualDayValue = defaultDate.GetDay(); //should be 20
	int actualMonthValue = defaultDate.GetMonth(); //should be 2
	int actualYearValue = defaultDate.GetYear(); //should be 2019

	//Assert
	EXPECT_EQ(expectedDay_value, actualDayValue); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonthValue); //Will continue on fail
	EXPECT_EQ(expectedYear_value, actualYearValue); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 4;
		std::cout << "\n TestDateConstructorValidArguments PASSED! : Date can be constructed with valid arguments " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestDateConstructorValidArguments FAILED : Date non-default constructor is not setting the date object data members correctly" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestInvalidDayArgument)
{
	std::cout << "\nRunning test TestInvalidDayArgument " << std::endl;

	//Arrange
	int expected_value{ 1 };

	//Act
	UUDate defaultDate{ 100,2,2000 };
	int actual_value = defaultDate.GetDay(); //should be set to 1 if student's code is checking for invalid day

	//Assert
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 4;
		std::cout << "\n TestInvalidDayArgument PASSED! : Date constructor correctly checks for invalid day argument " << std::endl;
	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestInvalidDayArgument : Date constructor accepts invalid day argument" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestInvalidMonthArgument)
{
	std::cout << "\nRunning test TestInvalidMonthArgument " << std::endl;

	//Arrange
	int expected_value{ 1 };

	//Act
	UUDate defaultDate{ 10,20,2000 };
	int actual_value = defaultDate.GetMonth(); //should be set to 1 if student code is checking for invalide day

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 4;
		std::cout << "\n TestInvalidMonthArgument PASSED! : Date constructor correctly checks for invalid month argument " << std::endl;
	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestInvalidMonthArgument : Date constructor accepts invalid month argument" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestInvalidYearArgument)
{
	std::cout << "\nRunning test TestInvalidYearArgument " << std::endl;

	//Arrange
	int expected_value{ 2000 };

	//Act
	UUDate defaultDate{ 10,20,0 };
	int actual_value = defaultDate.GetYear(); //should be set to 1 if student code is checking for invalide day

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestInvalidYearArgument PASSED! : Date constructor correctly checks for invalid year argument " << std::endl;
	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestInvalidYearArgument : Date constructor accepts invalid year argument. Year cannot be 0" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestSetBadDay)
{
	std::cout << "\nRunning testSetBadDay- " << std::endl;

	//Arrange
	int expected_value{ 20 };
	//Test default constructor
	UUDate defaultDate{20,4,2000};

	//Act
	defaultDate.SetDay(32); //should not allow this, should remain unchanged
	int actual_value = defaultDate.GetDay(); //should be 20

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 2;
		std::cout << "\n TestSetBadDay PASSED! : Day cannot be set to an invalid day " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestSetBadDay FAILED : You should not be allowed to set date to invalid day " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestSetBadDayNonleapYear)
{
	std::cout << "\nRunning testSetBadDay-NonleapYear " << std::endl;

		//Arrange
		int expected_value{ 28 };
	//Test default constructor
	UUDate defaultDate{ 28,2,2001 };

	//Act
	defaultDate.SetDay(29); //should not allow this, should remain unchanged
	int actual_value = defaultDate.GetDay(); //should be 28

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 3;
		std::cout << "\n TestSetBadDay PASSED! : Day cannot be set to an invalid day " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestSetBadDay FAILED : You should not be allowed to set date to invalid day " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestSetBadMonth)
{
	std::cout << "\nRunning testSetBadMonth- " << std::endl;

	//Arrange
	int expected_value{ 4 };
	//Test default constructor
	UUDate defaultDate{ 20,4,2000 };

	//Act
	defaultDate.SetMonth(15); //should not allow this, should remain unchanged
	int actual_value = defaultDate.GetMonth(); //should be 4

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 3;
		std::cout << "\n TestSetBadMonth PASSED! : Month cannot be set to invalid month " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestSetBadMonth FAILED : You should not be allowed to set date to invalid month " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestSetBadYear)
{
	std::cout << "\nRunning testSetBadYear- " << std::endl;

	//Arrange
	int expected_value{ 2000 };
	//Test default constructor
	UUDate defaultDate{ 20,4,2000 };

	//Act
	defaultDate.SetYear(0); //should not allow this, should remain unchanged
	int actual_value = defaultDate.GetYear(); //should be 2000

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 3;
		std::cout << "\n TestSetBadYear PASSED! : Year cannot be set to 0 " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestSetBadYear FAILED : You should not be allowed to set year to 0 " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestConstructorString1)
{
	std::cout << "\nRunning testConstructorString1 " << std::endl;

	//Arrange
	int expectedDay_value{ 1 };
	int expectedMonth_value{ 4 };
	int expectedYear_value{ 1977 };
	//Test default constructor
	UUDate defaultDate{ "1/4/1977" };

	int actualDayValue = defaultDate.GetDay(); //should be 1
	int actualMonthValue = defaultDate.GetMonth(); //should be 4
	int actualYearValue = defaultDate.GetYear(); //should be 1977

	//Assert
	EXPECT_EQ(expectedDay_value, actualDayValue); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonthValue); //Will continue on fail
	EXPECT_EQ(expectedYear_value, actualYearValue); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 5;
		std::cout << "\n testConstructor with string 1 PASSED! : Setting date with string ""1/4/1977"" worked " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n testConstructor with string 1 FAILED : Setting date with string ""1/4/1977"" failed " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesTests, TestConstructorString2)
{
	std::cout << "\nRunning testConstructorString2 " << std::endl;

		//Arrange
	int expectedDay_value{ 8 };
	int expectedMonth_value{ 9 };
	int expectedYear_value{ 2007 };
	//Test default constructor
	UUDate defaultDate{ "08/09/2007" };

	int actualDayValue = defaultDate.GetDay(); //should be 8
	int actualMonthValue = defaultDate.GetMonth(); //should be 9
	int actualYearValue = defaultDate.GetYear(); //should be 2007

	//Assert
	EXPECT_EQ(expectedDay_value, actualDayValue); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonthValue); //Will continue on fail
	EXPECT_EQ(expectedYear_value, actualYearValue); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 5;
		std::cout << "\n testConstructor with string 2 PASSED! : Setting date with string ""08/09/2007"" worked " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n testConstructor with string 2 FAILED : Setting date with string ""08/09/2007"" failed " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesTests, TestIncrementDate1)
{
	std::cout << "\nRunning TestIncrementDate1 - Day increment? " << std::endl;

	//Tests day increments correctly

	//Arrange
	int expected_value{ 17 };
	//Test default constructor
	UUDate defaultDate{"16/06/1545"};

	//Act
	defaultDate.IncrementDate();
	int actual_value = defaultDate.GetDay();

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 4;
		std::cout << "\n TestIncrementDate1 PASSED! : Day increments correctly " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestIncrementDate1 FAILED : Day did not increment " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestIncrementDate2)
{
	std::cout << "\nRunning TestIncrementDate2 Month increment? " << std::endl;

	//Tests day & month increments correctly

	//Arrange
	int expectedDay_value{ 01 };
	int expectedMonth_value{ 7 };

	//Test default constructor
	UUDate defaultDate{"30/06/1545" };

	//Act
	defaultDate.IncrementDate();
	int actualMonth_value = defaultDate.GetMonth();
	int actualDay_value = defaultDate.GetDay();

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expectedDay_value, actualDay_value); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonth_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 5;
		std::cout << "\n TestIncrementDate2 PASSED! : Month increments correctly " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestIncrementDate2 FAILED : Day or Month did not increment correctly " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestIncrementDate3)
{
	std::cout << "\nRunning TestIncrementDate3 Year increment? " << std::endl;

		//Tests day increments correctly

	//Arrange
	int expectedDay_value{ 1 };
	int expectedMonth_value{ 1 };
	int expectedYear_value{ 1798 };
	//Test default constructor
	UUDate defaultDate{"31/12/1797"};

	//Act
	defaultDate.IncrementDate();
	int actualDay_value = defaultDate.GetDay();
	int actualMonth_value = defaultDate.GetMonth();
	int actualYear_value = defaultDate.GetYear();

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expectedDay_value, actualDay_value); //Will continue on fail
	EXPECT_EQ(expectedMonth_value, actualMonth_value); //Will continue on fail
	EXPECT_EQ(expectedYear_value, actualYear_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 6;
		std::cout << "\n TestIncrementDate3 PASSED! : day, month & year increments correctly " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestIncrementDate3 FAILED : Day, month or year did not increment " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestIncrementDateLeapYear1)
{
	std::cout << "\nRunning TestIncrementDateLeapYear day increment correctly? " << std::endl;

	//Tests day increments correctly on a leap year

	//Arrange
	int expected_value{ 29 };
	//Test default constructor
	UUDate defaultDate{"28/2/2020"};

	//Act
	defaultDate.IncrementDate();
	int actual_value = defaultDate.GetDay();

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 6;
		std::cout << "\n TestIncrementDateLeapYear PASSED! : Your code works for leap years" << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestIncrementDateLeapYear FAILED : Your code doesn't correctly work for leap years" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestIncrementDateLeapYear2)
{
	std::cout << "\nRunning TestIncrementDateLeapYear2  day increment correctly? " << std::endl;

	//Tests day increments correctly

	//Arrange
	int expected_valueDay{ 1 };
	int expected_valueMonth{ 3 };
	//Test default constructor
	UUDate defaultDate{"29/2/2020"};

	//Act
	defaultDate.IncrementDate();
	int actual_valueDay = defaultDate.GetDay();
	int actual_valueMonth = defaultDate.GetMonth();

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_valueDay, actual_valueDay); //Will continue on fail
	EXPECT_EQ(expected_valueMonth, actual_valueMonth); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 6;
		std::cout << "\n TestIncrementDateLeapYear2 PASSED! : Your code works for leap years" << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestIncrementDateLeapYear2 FAILED : Your code doesn't work correctly for leap years" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestBetweenDates1)
{
	std::cout << "\nRunning TestBetweenDates1 " << std::endl;

	//Arrange
	int expected_value{ 26 };
	//Test default constructor
	UUDate startDate{01,05,2007 };
	UUDate endDate{ 27,05,2007 };

	//Act
	int actual_value = startDate.Between(endDate); //should be 26

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 8;
		std::cout << "\n TestBetweenDates1 PASSED! : Your code correctly calculates days between dates that differ in days days " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestBetweenDates2 FAILED : You code does not correctly calculate days between dates that differ in days" << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestBetweenDates2)
{
	std::cout << "\nRunning TestBetweenDates2 " << std::endl;

	//Arrange
	int expected_value{ 63 };
	//Test default constructor
	UUDate startDate{ 15,7,2007 };
	UUDate endDate{ 16,9,2007 };

	//Act
	int actual_value = startDate.Between(endDate); //should be 63

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 8;
		std::cout << "\n TestBetweenDates2 PASSED! : Your code correctly calculates days between days, and months " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestBetweenDates2 FAILED : You code does not correctly calculate days between days, months and years " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}

TEST(UUDatesTests, TestBetweenDates3)
{
	std::cout << "\nRunning TestBetweenDates1 " << std::endl;

	//Arrange
	int expected_value{ 7246 };
	//Test default constructor
	UUDate startDate{ 4,12,1998 };
	UUDate endDate{ 6,10,2018 };

	//Act
	int actual_value = startDate.Between(endDate); //should be 7246

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 8;
		std::cout << "\n TestBetweenDates3 PASSED! : Your code correctly calculates days between dates over days, years and months " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestBetweenDates3 FAILED : You code does not correctly calculate days between dates over day, months and years " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

}


TEST(UUDatesTests, TestGetDateString)
{
	std::cout << "\nRunning TestGetDateString " << std::endl;

	//Arrange
	//std::string expected_value{"31/12/2018" };
	bool expected_value = true;
	//Test default constructor
	UUDate defaultDate{31,12,2018};

	//Act
	std::string actualString = defaultDate.GetDate(); //should be "31/12/2018"
	bool actual_value = std::regex_match(actualString, verifyDate);

	//Assert
	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
	EXPECT_EQ(expected_value, actual_value); //Will continue on fail

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 6;
		std::cout << "\n TestGetDateString PASSED! : Date string correctly formatted " << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "\n TestGetDateString FAILED : Date string incorrectly formatted " << std::endl;
	}
	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints << "/" << maxPoints << std::endl;

	std::cout << "\n\nFinal mark for unit tests: " << currentPoints << "/" << maxPoints << std::endl;

}




//TEST(UUDatesTests, Test - FUNCTION)
//{
//	std::cout << "\nRunning testSetters " << std::endl;
//
//		//Arrange
//		//int expected_value{ 2000 };
//		//Test default constructor
//		UUDate defaultDate{};
//
//	//Act
//	//int actual_value = defaultDate.GetDay(); //should be 1
//
//	//Assert
//	//ASSERT_EQ(expected_value, actual_value); //Will abort on fail
//	//EXPECT_EQ(expected_value, actual_value); //Will continue on fail
//
//	if (!HasFailure()) {
//		//Test has passed
//		currentPoints_test1 += 1;
//		std::cout << "\n test X PASSED! : SOME FEEDBACK HERE " << std::endl;
//
//	}
//	else if (HasFailure() {
//		//Test failed - provide feedback
//		std::cout << "\n test X FAILED : SOME FEEDBACK HERE " << std::endl;
//	}
//	std::cout << "\nCurrent MARKS UUDatesTests:" << currentPoints_test1 << "/" << maxPoints << std::endl;
//
//}
