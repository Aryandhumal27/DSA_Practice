// You are given an integer n. You need to check if the number is prime or not.
// Return true if it is a prime number, otherwise return false.

// A prime number is a number which has no divisors except 1 and itself.

// Example 1
// Input: n = 5
// Output: true

// Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

// Example 2
// Input: n = 8
// Output: false

// Explanation: The divisors of 8 are 1, 2, 4, 8, thus it is not a prime number.

#include<iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int iNo)
    {
        int iCnt = 0;
        int iCounter = 0;

        for(iCnt = 1; (iCnt * iCnt) <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iCounter++;
                if((iNo / iCnt) != iCnt)
                {
                    iCounter++;
                }
            }    
        }

        if(iCounter == 2) return true;
        else return false;
    }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    Solution sobj;

    bRet = sobj.isPrime(iValue);

    if(bRet == true) cout<<"It is Prime number\n";
    else cout<<"It is not a prime number\n";

    return 0;
}