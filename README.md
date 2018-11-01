
# COM326 assignment 1
## Description
This README contains detailed instructions for your assignment. Read it carefully.

## Submission details
* __Deadline:__ Before midnight on 09/11/2018. Submissions after this point will not be accepted.
* __Submission method:__ GitHub classroom.
* __Assignment type:__ Individual Assignment
* __Assignment weighting:__ 50% of coursework mark

### To do
* Student name: [Replace this text with  your name]
* StudentID: [Replace this text with your Student ID]
* GitHub Username: [Replace this text  with your GitHub username]
* Discord Name: [Replace this text with your Discord username]

## Problem statement:
Implement a simple date class called `UUDate` in C++. The `UUDate.h` file declares the interface for the class. You must
implement the member functions in the `UUDate.cpp` file. __DO NOT__ change the signatures of the class member functions
or the data members of the class. You can add your own utility member functions or data members. However, your
code must provide the public member functions as specified in the `UUDate.h` file.

## Files to work on
* `README.md` - You should only add your name and student ID, github and discord usernames to this file
* `UUDate.h` - Work on this file
* `UUDate.cpp` - Add your implementation here
* You can also modify 'main.cpp' to debug and test your code
* __DO NOT__ modify any other files in the repository. __Doing so could result in a mark of 0%__

## Constraints
* You are not permitted to use `<ctime>`, `<chrono>` or any other time/date headers
* Dates should be in the format `dd/mm/yyyy` or `d/m/yyyy`
* Default constructor should set date to the date `01/01/2000`
* If any constructor arguments are invalid, set the date to `01/01/2000`
* Invalid arguments to setter functions should be discarded and the date object data should remain unchanged
* The year cannot be 0
* The member function `GetDate()` should the return a correctly formatted date string in the format `dd/mm/yyyy`

## Exceptions
* Do not throw exceptions in your code. Just ignore invalid arguments.

## Notes
* We are using the Gregorian Calendar only
* The code in `UUDate.cpp` should __not__ write out to the console or accept input from the keyboard
* Make sure your code compiles and runs. __There are no points for code that does not compile__
* You will receive marks for every test your code passes
* Check the logs from Travis to verify the correctness of your program
* The initial code provided with this assignment will not compile. You will have to write the necessary implementation of the `UUDate` class
* Travis-CI uses the `GCC compiler` which is different to visual studio. Windows specific code will not compile in GCC. Ensure you __write portable C++ code__.
* Make sure your last push to GitHub is before the deadline. Submissions after the deadline will not be possible. Your last push will be considered as your final submission.
* Post questions (not solutions) to the assignment channel on discord
* Please contact module staff if you run into issues.

## Marking scheme
Your assignment mark will be based on the unit tests passed. The unit tests for this assignment are:

\# | Description | Marks
--- | ----------- | -----
1 |	Test GetDay on using default constructor | 2
2 |	Test GetMonth on using default constructor |	2
4 |	Test default constructor |	2
3 |	Test Getyear on using default constructor |	2
5	| Test create date constructor with valid arguments |	4
6 |	Test create date constructor with invalid day argument |	4
7 |	Test create date constructor with invalid month argument |	4
8 |	Test create date constructor with year 0 fails |	2
9 |	Test setDay with bad day argument |	2
10 | Test setDay with argument 29 on non leap year |	3
12 |	Test setYear with bad year argument |	3
11 |	Test setMonth with bad argument |	3
13 |	Test constructor with string1  |	5
14 |	Test constructor with string  |	5
15 |	Test incrementDate - increments the day |	4
16 |	Test incrementDate - increments the month |	5
17 |	Test incrementDate - increments the year |	6
18 |	Test incrementDate works for leap years 29/02	| 6
19 |	Test increment date functions correctly 29/03 moves to 01/04 |	6
20 |	Check BetweenDates | 8
21 |	Check Between2 - different days and months |	8
22 |	Check Between3 - different years |	8
23 |	GetDate returns correct string |	6


## Running tests
* Your code will automatically be tested every time you push your code to GitHub :octocat:.
* Travis-CI will send you email notifications of broken, failed and fixed builds.
* Examine the build logs carefully if your code does not pass a unit test or fails to build.
