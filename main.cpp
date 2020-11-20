

/*
Bridget Naylor
Date:11/10/2020
Class: CECS 282 Section 04
Lab: 5
Honesty statement:
I certify that this program is my own original work. I did not copy any part of this program from
any other source. I further certify that I typed each and every line of code in this program.
*/

#include <time.h>
#include <iomanip>
#include <iostream>
using namespace std;

int goldRabbits( int );
//declare big int class here
BigInt goldRabbits( BigInt );

int main()
{
    //make sure t throw exception for bad inputs
    int const months = 12 * 10;
    int start = time(0);
    try 
    {
        for ( int i = 0; i < months; i ++)
        {
            int cur = time(0);
            cout<< setw(5)<<cur-start<<":";
            cout<< "GoldRabbits(" << setw(2)<<i<<") = ";
            cout<< setw(11)<<goldRabbits(i)<<endl;
        }
    }
    catch ( invalid_argument & ex )
    {
        cout<<"Exception: "<<ex.what()<<endl;
    }

    return 0;
}

//biggest num int can hold is 2,147,483,647
//rabbit 45
int goldRabbits( int n )
{
    if ( n < 40 )
    {
        if ( n == 0 || n == 1 )
        {
            return 1;
        }
        else
        {
            return goldRabbits( n - 1 ) + goldRabbits( n - 2 );
        }
    }
    else
    {
        throw invalid_argument("Number of months cannot exceed 40");
    }
    
}

//define big int class here



