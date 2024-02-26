#include<iostream>
using namespace std;
#include<vector>

long long maximumTripletValue(std::vector<int>& nums) {
        long long ans = 0;
        for(int i=0; i<nums.size()-2; i++) {
            for(int j=i+1; j<nums.size()-1; j++) {
                for(int k=j+1; k<nums.size(); k++) {
                    long long sub = nums[i] - nums[j];
                    long long result = (nums[i] - nums[j]) * nums[k];
                    if (result > ans)
                    {
                        ans = result;
                    }
                    // ans = max(ans, result);
                }
            }
        }
        return ans;
}

int main() {
    vector<int> vec = { 1000000, 1, 1000000 };
    cout << maximumTripletValue(vec) << endl;
    return 0;
}