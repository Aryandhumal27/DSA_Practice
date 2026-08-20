// You are given two integers n1 and n2. 
// You need find the Greatest Common Divisor (GCD) of the two given numbers. 
// Return the GCD of the two numbers.

// The Greatest Common Divisor (GCD) of two integers is the largest positive 
// integer that divides both of the integers.

// Example 1
// Input: n1 = 4, n2 = 6
// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
// Greatest Common divisor = 2.

// Example 2
// Input: n1 = 9, n2 = 8
// Output: 1

// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
// Greatest Common divisor = 1.

#include<iostream>
using namespace std;

class Solution
{
public:
    int calculateGCD(int iNo1, int iNo2)
    {
        while(iNo1 > 0 && iNo2 > 0)
        {
            if(iNo1 > iNo2) iNo1 = iNo1 % iNo2;
            else iNo2 = iNo2 % iNo1;
        }

        if(iNo1 == 0) return iNo2;
        else iNo1;
    }

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    cout<<"Enter second number : \n";
    cin>>iValue2;

    Solution sobj;

    cout<<sobj.calculateGCD(iValue1, iValue2);


    return 0;
}