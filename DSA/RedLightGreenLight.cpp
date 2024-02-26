#include<iostream>
#include<vector>
using namespace std;
int people(vector<int> height) {
    int count = 0;
    for (int i = 1; i < height.size()-1; i++) {
        if(height[i] > height[0]) {
            count++;
        }
    }
    return count;
}
int main() {
    vector<int> height = {12, 23, 1, 10, 2, 23, 342, 12};
    cout << people(height) << endl;
    return 0;
}