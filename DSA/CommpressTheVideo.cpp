#include<iostream>
#include<vector>
using namespace std;
vector<int> compress(std::vector<int> video) {
    for (int i = 1; i < video.size() - 1; i++) {
        if(video[i] == video[i-1] || video[i] == video[i+1]) {
            video.erase(video.begin() + i);
            i--;
        }
    }
    return video;
}
int main() {
    vector<int> vec = {5, 2, 5, 1, 6, 6, 8, 9, 2, 2, 2, 8, 4};
    vector<int> ans = compress(vec);
    for(int i:ans) {
        cout << i << " " << endl;
    }
    return 0;
}