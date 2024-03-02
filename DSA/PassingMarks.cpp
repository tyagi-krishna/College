#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int PassingMarks(vector<int> marks, int x) {
    sort(marks.begin(), marks.end());
    return marks[marks.size()-x] - 1;
}
int main() {
    // vector<int> marks = {32, 43, 45, 63, 1, 2, 3};
    int count;
    cout << "Enter no of students: " << endl;
    cin >> count;
    vector<int> marks(count);
    for (int i = 0; i < count; i++)
    {
        cin >> marks[i];
    }
    int x;
    cout << "The no of pass students:" << endl;
    cin >> x;
    cout << PassingMarks(marks, x) << endl;
    return 0;
}