//tells the processor to include the input output functions
#include <iostream>
//used to differentiate similar functions
using namespace std;
//declaring main function
int main()
{
//declaring constants
    const double WHOLEBAG = 30, SERVINGNUM = 10, SERVINGCAL = 300;
//declaring variables
    double cookiesEaten, cookieNum, cookieCal, calsEaten;
//explaining what the program does
    cout<< "This program calculates the amount of calories you've consumed in cookies." << endl << endl;
//asking for user input
    cout<< "Enter number of cookies eaten: ";
//assigning user input to variable
    cin>> cookiesEaten;
//processing and assigning values to other variables using user input and constants
    cookieNum = WHOLEBAG / SERVINGNUM;
    cookieCal = SERVINGCAL / cookieNum;
    calsEaten = cookieCal * cookiesEaten;

    cout<< endl << endl;
//displaying output
    cout<< "You have consumed " << calsEaten << " calories.";//output
//signaling end of program
    return 0;
}
