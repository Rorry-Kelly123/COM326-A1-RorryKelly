/*
* UUDate.cpp
*
* Version information
* Author: TODO - Add your name here
* Date: TODO - Add date you started working on the code
* Description: This file is the implementation file for the UUDate class and defines (implements) the functions of the class
*
* Copyright notice -
*/


#include "UUDate.h"

UUDate::UUDate() {
	SetDay(01);
	SetMonth(01);
	SetYear(2000);
}

UUDate::UUDate(int day, int month, int year) {
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}

UUDate::UUDate(std::string date) {
	date.erase(date.begin() + 2);
	date.erase(date.begin() + 4);

	day_ = std::stoi(date.substr(0, 2));
	month_ = std::stoi(date.substr(2, 2)); 
	year_ = std::stoi(date.substr(4, date.length() - 4));
}

void UUDate::IncrementDate() {
	if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12)
	{
		if (day_ == 31)
		{
			day_ = 0;
			++month_;
			if (month_ == 13)
			{
				month_ = 1;
				++year_;
			}
		}

	}
	if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)
	{
		if (day_ == 30)
		{
			day_ = 0;
			++month_;
		}
	}
	if (month_ == 2)
	{
		if (year_ % 4 == 0)
		{
			if (year_ % 100 != 0 || year_ % 400 == 0)
			{
				if (day_ == 29)
				{
					day_ = 0;
					++month_;
				}
			}
		}
		else if (day_ == 28)
		{
			day_ = 0;
			++month_;
		}
	}
	++day_;
}

int UUDate::Between(UUDate date) {
	UUDate counter;
	int daysBetween = 0;
	bool isAfter = false;

	if (year_ < date.GetYear())
		isAfter = true;
	else if (month_ < date.GetMonth() && isAfter == false)
		isAfter = true;
	else if (day_ < date.GetDay() && isAfter == false)
		isAfter = true;

	if (isAfter == true)
	{
		counter = cloneDate();

		for (daysBetween; IsSameDate(counter, date); ++daysBetween)
		{
			counter.IncrementDate();
		}
	}
	else
	{
		counter = date;
		UUDate checker = cloneDate();
		for (daysBetween; IsSameDate(counter, checker); ++daysBetween)
		{
			counter.IncrementDate();
		}
	}

	return daysBetween;
}

int UUDate::GetDay() const {
	return day_;
}

void UUDate::SetDay(int day) {
	day_ = day;
}

int UUDate::GetMonth() const {
	return month_;
}

void UUDate::SetMonth(int month) {
	month_ = month;
}

int UUDate::GetYear() const {
	return year_;
}

void UUDate::SetYear(int year) {
	year_ = year;
}

std::string UUDate::GetDate() {

	std::string date = std::to_string(day_);
	date += "/";
	if (month_ < 10)
		date += "0";
    date += std::to_string(month_);
	date += "/";
	date += std::to_string(year_);
	return date;
}

UUDate UUDate::cloneDate()
{
	UUDate clone;
	clone.SetDay(day_);
	clone.SetMonth(month_);
	clone.SetYear(year_);

	return clone;
}

bool UUDate::IsSameDate(UUDate firstDate, UUDate secondDate)
{
	bool sameDate = true;
	if (firstDate.GetDay() != secondDate.GetDay())
		sameDate = false;
	else if (firstDate.GetMonth() != secondDate.GetMonth())
		sameDate = false;
	else if (firstDate.GetYear() != secondDate.GetYear())
		sameDate = false;
	return sameDate;
}



