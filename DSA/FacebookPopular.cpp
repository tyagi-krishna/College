#include<iostream>
#include<vector>
using namespace std;
int Popular(vector<int> A, vector<int> B) {
    int popular = 0;
    for (int i = 1; i < A.size(); i++) {
        if(A[popular] < A[i])
            popular = i;
        else if(A[popular] == A[i]) {
            if(B[popular] < B[i])
                popular = i;
        }
    }
    return popular;
}
int main() {
    // vector<int> A = {1, 2, 3, 4, 5, 6, 4, 6, 2};
    // vector<int> B = {1, 2, 3, 4, 5, 6, 2, 3, 2};
    // vector<int> A = {4, 5, 6};
    // vector<int> B = {2, 3, 4};
    // vector<int> A = {4, 4, 3};
    // vector<int> B = {2, 3, 1};
    int count;
    cout << "Enter the number of Posts: " << endl;
    cin >> count;
    vector<int> A(count);
    vector<int> B(count);
    cout << "Enter the Likes: " << endl;
    for (int i = 0; i < count; i++) {
        cin >> A[i];
    }
    cout << "Enter the Comments: " << endl;
    for (int i = 0; i < count; i++) {
        cin >> B[i];
    }
    cout <<"The Answer is "<< Popular(A, B) << endl;
    return 0;
}