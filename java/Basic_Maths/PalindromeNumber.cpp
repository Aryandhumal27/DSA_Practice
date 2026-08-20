// You are given an integer n. You need to check whether the number is a palindrome number or not. 
// Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1
// Input: n = 121
// Output: true

// Explanation: When read from left to right : 121.
// When read from right to left : 121.

// Example 2
// Input: n = 123
// Output: false

// Explanation: When read from left to right : 123.
// When read from right to left : 321.

#include<iostream>
using namespace std;

class Logic
{
    public:
        void palindromeNumber(int iNo)
        {
            int iDuplicate = iNo;
            int iDigit = 0;
            long long iReverse = 0ll;

            if(iNo < 0)
            {
                cout<<"false";
                return;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                iReverse = (iReverse * 10) + iDigit;

                iNo = iNo / 10;
        

            if((int)iReverse == iDuplicate) cout<<"true";
            else cout<<"false";      
            }  
        }
};

int main()
{   
    int iValue = 0;

    cout<<"Enter the Digit : \n";
    cin>>iValue;

    Logic *lobj = new Logic();

    lobj->palindromeNumber(iValue);

    return 0;
}