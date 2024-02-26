#include<iostream>
#include<vector>
using namespace std;
int students(vector<int> A, vector<int> B) {
    int count = 0;
    if(A[0] == B[0])
        count++;
    for (int i = 1; i < A.size(); i++)
    {
        if(A[i] == B[i] && A[i-1] == B[i-1]) {
            count++;
        }
    }
    return count;
}
int main() {
    vector<int> A = {2, 3, 4, 52, 53, 56, 67};
    vector<int> B = {2, 3, 4, 31, 52, 56, 67};
    cout << students(A, B) << endl;
    return 0;
}