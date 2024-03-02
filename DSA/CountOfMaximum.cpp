#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int count = 1, maxCount = 1;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] == nums[i+1])
            count++;
        else {
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
}
int map(vector<int> nums) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
        map[nums[i]]++;
    int maxi = 0;
    for (auto it : map) {
        maxi = max(maxi, it.second);
    }
    for(auto it:map) {
        if(it.second == maxi)
            return it.first;
    }
    return 0;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 1, 1, 4};
    cout << map(nums) << endl;
    cout << count(nums) << endl;
    return 0;
}