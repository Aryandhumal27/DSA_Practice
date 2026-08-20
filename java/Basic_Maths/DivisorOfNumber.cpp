// You are given an integer n. You need to find all the divisors of n. 
// Return all the divisors of n as an array or list in a sorted order.

// A number which completely divides another number is called it's divisor.

// Example 1

// Input: n = 6
// Output = [1, 2, 3, 6]

// Explanation: The divisors of 6 are 1, 2, 3, 6.

// Example 2
// Input: n = 8
// Output: [1, 2, 4, 8]

// Explanation: The divisors of 8 are 1, 2, 4, 8.

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution
{
public:
    vector<int> divisors(int iNo)
    {
        vector<int> vec;

        for(int iCnt = 1; (iCnt * iCnt) <= iNo; iCnt++)     // Better Approach
        // for(int iCnt = 1; iCnt <= sqrt(iNo); iCnt++)

        {
            if(iNo % iCnt == 0)
            {
                vec.push_back(iCnt);

                if((iNo / iCnt) != iCnt)
                {
                    vec.push_back(iNo / iCnt);
                }
            }
        }

        sort(vec.begin(), vec.end());

        return vec;
    }
};  

int main()
{
    int iValue = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    Solution sobj;

    vector<int> vec = sobj.divisors(iValue);

    for(auto it : vec)
    {
        cout << it << " ";
    }

    return 0;
}