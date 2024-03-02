#include<iostream>
#include<vector>
using namespace std;
int count(vector<int> cops, int x, int y) {
    vector<int> houses(100);
    for (int i = 0; i < cops.size(); i++) {
        for (int j = cops[i]; j < cops[i] + x*y; j++)
        {
            houses[j]++;
        }
        for (int j = cops[i]; j>0 && j>cops[i]-x*y; j--) {
            houses[j]++;
        }
    }
    int count = 0;
    for (int i = 0; i < houses.size(); i++)
    {
        if(houses[i]==0)
            count++;
    }
    return count;
}
int main() {
    vector<int> cops = {4, 9, 45};
    cout << count(cops, 4, 7) << endl;
    return 0;
}