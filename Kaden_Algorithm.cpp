#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
    //Kaden's Algorithm
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int maxSum=0;
        for(auto it: nums){
            currentSum+=it;
            if(currentSum > maxSum) maxSum=currentSum;
            if(currentSum < 0) currentSum=0;
        }
        return maxSum;
    }
};
//kaden algorithm is used to find the subarray with maximum sum