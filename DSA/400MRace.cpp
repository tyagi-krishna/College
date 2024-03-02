#include<iostream>
#include<vector>
using namespace std;
int winner(int x, int y, int z) {
    return min(x, min(y, z));
}
int main() {
    cout << winner(12, 11, 9) << endl;
    return 0;
}