#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largessecond(vector<int> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
    }
    return -1; 
}

int main() {
    int rawArr[] = {12, 25, 1, 10, 34};
    vector<int> arr(rawArr, rawArr + sizeof(rawArr) / sizeof(rawArr[0]));
    cout << largessecond(arr) << endl; 

    return 0;
}