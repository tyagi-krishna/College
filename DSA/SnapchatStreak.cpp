#include<iostream>
#include<vector>
using namespace std;
int streak(vector<int> A, vector<int> B) {
    int maxStreak = 0;
    int streak = 0;
    for (int i = 0; i < A.size(); i++){
        if(A[i] >0 && B[i]>0) {
            streak++;
        }
        else {
            streak = 0;
        }
        maxStreak = max(maxStreak, streak);
    }
    return maxStreak;
}
int main() {
    vector<int> A = {1, 1, 2, 0, 0, 1, 2, 3};
    vector<int> B = {1, 2, 3, 4, 0, 0, 3, 4};
    int a = streak(A, B);
    cout << a << endl;
    return 0;
}