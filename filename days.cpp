/* Name: (Eliallah Dadzie)
Date: (02/04/2023)
Assignment: (Assignment #2)
Due Date: (02/06/2023)
About this project: ( Calculating the months and figuring out which has 31, 30, 28 and 29 days)
Assumptions: ( I assume that the user will input the correct numbers.)
All work below was performed by (Eliallah Dadzie) */


#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
   //Declaration of variables
    int month;
    int year;
    int numdays;
    
    
    cout<<"Enter a month (1-12): ";
    cin >> month;
    
    cout << "Enter a year: ";
    cin >> year;
    
    //If and else statements to check for which months have 31, 30, 28, 29
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month ==10 || month == 12)
    { 
        numdays = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        numdays = 30;
    }
    else if (month == 2)
    {
        //calculating leap year
        //checking to see if it is divisible by 100,400 and 4
    if (year % 100 == 0 && year % 400)
    {
        numdays = 29;
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        numdays = 29;
    }
    else 
    { 
        numdays = 28;
   
    }
        
    }
    //error checking
    if (month < 1 || month > 12 )
    {
        cout << "Invalid Month entered. Aborting Program" << endl;
    }
   
    else 
    {
    cout << "Number of days: "<< numdays << endl;
    }
    

    return 0;
}


