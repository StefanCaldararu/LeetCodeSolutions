#include <iostream>
#include <vector>
using namespace std;


bool canJump(vector<int>& nums) {
    int furthest_point = 0;
    for(int i = 0;i<nums.size();i++){
        if(i>furthest_point)
            return false;
        if(nums[i]+i>furthest_point)
            furthest_point = nums[i]+i;
    }
    return true;
}