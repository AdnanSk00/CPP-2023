#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     int subProd_Sum(int n)
//     {

//         int prod = 1;
//         int sum = 0;

//         while (n != 0)
//         {

//             int digit = n % 10;
//             prod = prod * digit;
//             sum = sum + digit;

//             n = n / 10;
//         }
//         int answer = prod - sum;
//         cout << answer ;
//         // return answer;
//     }
// };

// int main()
// {
//     Solution obj;
//     obj.subProd_Sum(12345);
//     return 0;
// }

class Solution{
    public:
    int hammingWeight(uint32_t n){
        int count = 0;
        while(n!=0){
            // checking last bit
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};

int main(){
    Solution obj;
    obj.hammingWeight(11111111);
    return 0;
}