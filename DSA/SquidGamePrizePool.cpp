#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int prize(vector<int> money) {
    int ans = 0, smallest = INT8_MAX, sum = 0;
    for (int i = 0; i < money.size(); i++) {
        sum += money[i];
        smallest = min(smallest, money[i]);
    }
    // std::sort(money.begin(), money.end());
    // for (int i = money.size() - 1; i > 0; i--) {
    //     ans += money[i];
    // }
    return sum - smallest;
}
int main() {
    vector<int> money = {1, 2, 3, 4, 5, 6, 4, 3};
    cout << prize(money) << endl;
    return 0;
}