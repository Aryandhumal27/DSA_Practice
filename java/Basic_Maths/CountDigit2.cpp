// Count all Digits of a Number

// Hints
// Company
// You are given an integer n. You need to return the number of digits in the number.

// The number will have no leading zeroes, except when the number is 0 itself.

// Example 1
// Input: n = 4
// Output: 1

// Explanation: There is only 1 digit in 4.

// Example 2
// Input: n = 14
// Output: 2

// Explanation: There are 2 digits in 14.

// Another Optimized Approach

#include<iostream>
#include<cmath>
using namespace std;

class Logic
{
public:
    int CountDigit(int iNo)
    {
        int iCount = 0;

        iCount = (int)(log10(iNo) + 1);

        return iCount;
    }
};

int main()
{   
    int iValue = 0;

    cout<<"Enter the Digit : \n";
    cin>>iValue;

    Logic *lobj = new Logic();

    cout<<lobj->CountDigit(iValue);

    return 0;
}