// You are given an integer n. You need to check whether it is an armstrong number or not.
// Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, 
// raised to the power of the number of digits.


// Example 
// Input: n = 153
// Output: true

// Explanation: Number of digits : 3.
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
// Therefore, it is an Armstrong number.

// Example 2
// Input: n = 12
// Output: false

// Explanation: Number of digits : 2.
// 1^2 + 2^2 = 1 + 4 = 5.

// Therefore, it is not an Armstrong number.

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Logic
{
public:
    bool armStrongNumber(int iNo)
    {
        int iDuplicate = iNo;
        int iDigit = 0;
        int iTotalDigits = to_string(iNo).length();
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            cout << "Digit = " << iDigit << endl;
            int cube = pow(iDigit, iTotalDigits);

            iSum += cube;

            cout<< "Sum : "<<iSum<<endl;
            iNo = iNo / 10;
        }

        cout<<iDuplicate<<" "<<iSum;
        return (iDuplicate == iSum);
    }    
};

int main()
{   
    int iValue = 0;

    cout<<"Enter the Digit : \n";
    cin>>iValue;

    Logic lobj;

    bool bRet = lobj.armStrongNumber(iValue);

    if(bRet == true)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}