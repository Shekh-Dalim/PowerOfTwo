/***************************** Power of 2 (me) **************************/
// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPowerOfTwo(int n)
// {
//     for (int i = 0; i <= 30; i++)
//     {
//         int ans = pow(2, i);
//         if (ans == n)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cout << "Enter thevalue of n: ";
//     cin >> n;
//     if(isPowerOfTwo(n) == 1){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// };



/* Another way*/
#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        int INT_MAX;
        if (ans == n)
        {
            return true;
        }
        if(ans < INT_MAX/2)
        ans = ans * 2;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter thevalue of n: ";
    cin >> n;
    bool value = isPowerOfTwo(n);
    cout << "The value is power of 2 or not : " << value;
};