#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int find(vector<int> A, string V) {
    int ans = INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        if (V[i] == '0' && A[i] < ans)
            ans = A[i];
    }
    return ans;
}
int main() {
    // vector<int> A = {1, 2, 3, 4, 5, 6};
    // string V = "111011";
    int count;
    cout << "Enter the Number of Cases: " << endl;
    cin >> count;
    vector<int> A(count);
    cout << "Enter the size of test cases: " << endl;
    for (int i = 0; i<count; i++) {
        cin >> A[i];
    }
    string V;
    cout << "Enter the case Condition: " << endl;
    cin >> V;
    cout << find(A, V) << endl;
    return 0;
}