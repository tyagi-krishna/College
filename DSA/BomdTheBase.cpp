#include<iostream>
#include<vector>
using namespace std;
int bomb(vector<int> village, int power) {
    for (int i = village.size() - 1; i > 0; i--) {
        if(power > village[i]) {
            return i + 1;
        }
    }
    return 0;
}
int main() {
    int power = 10;
    vector<int> village = {342, 34, 3423, 1, 213};
    cout << bomb(village, power) << endl;
    return 0;
}