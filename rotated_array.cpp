#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            return true;
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int k = 6;

    if (binarySearch(arr, k)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not Found\n";
    }

    return 0;
}