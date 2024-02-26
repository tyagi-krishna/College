#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> nums) {
    int count = 0;
    if(nums[0] > nums[1])
        count++;
    for (int i = 1; i < nums.size() - 1; i++)
    {
        if(nums[i] > nums[i-1] || nums[i]>nums[i+1]) {
            count++;
        }
    }
    if(nums[nums.size()-1] > nums[nums.size()-2])
        count++;
    return count;
}
int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << peak(vec) << endl;
    return 0;
}