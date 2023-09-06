#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    std::vector<int> found;
    int mycount = 1;
    for(int i = 1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[mycount] = nums[i];
            mycount++;
        }
    }

    return mycount;
}

int main(){
    // isPalindrome(101);
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    std::cout << "result: " << removeDuplicates(nums) << "\n";
    return 0;
}