#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        for (int i = 0;i<nums.size()-1;i++){
            for (int j  = i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }

int main(){
    // isPalindrome(101);
    vector <int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    int target = 6;
    vector <int> result;
    result = twoSum(nums, target);
    for (auto i: result ) {
    std::cout << i << ' '; // will print: "a b c"
    }
    cout << "\n";
    return 0;
}