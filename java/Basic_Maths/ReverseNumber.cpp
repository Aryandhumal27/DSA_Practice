// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


// Example 1
// Input: n = 25
// Output: 52

// Explanation: Reverse of 25 is 52.

// Example 2
// Input: n = 123
// Output: 321

// Explanation: Reverse of 123 is 321.

// Input: n = 54
// Output: 45

#include<iostream>
using namespace std;

class Logic
{
public:
    int ReverseNumber(int iNo)
    {
        int iDigit = 0;
        int iReverse = 0;
        bool iFlag = false;

        // if(iNo < 0)
        // {
        //     iNo = -iNo;
        //     iFlag = true;
        // }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iReverse = (iReverse * 10) + iDigit;

            iNo = iNo / 10;
        }

        // if(iFlag == true)
        // {
        //     iReverse = -iReverse;
        // }

        return iReverse;
    }

    
};

int main()
{   
    int iValue = 0;

    cout<<"Enter the Digit : \n";
    cin>>iValue;

    Logic *lobj = new Logic();

    cout<<lobj->ReverseNumber(iValue);

    return 0;
}