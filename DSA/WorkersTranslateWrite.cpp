#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int price(vector<int> workers, vector<int> coins) {
    int bothMin = INT_MAX, transMin = INT_MAX, writeMin = INT_MAX;
    for (int i = 0; i < workers.size(); i++)
    {
        if(workers[i]==3) {
            bothMin = min(bothMin, coins[i]);
        }
        else if(workers[i]==2) {
            transMin = min(transMin, coins[i]);
        }
        else if(workers[i]==1) {
            writeMin = min(writeMin, coins[i]);
        }
    }
    return bothMin > transMin + writeMin ? transMin + writeMin : bothMin;
}