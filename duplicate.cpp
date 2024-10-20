#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 1, 5};
    set<int> uniqueelements(arr.begin(), arr.end());

    vector<int> result(uniqueelements.begin(), uniqueelements.end());

    cout << "Array without duplication ";
    for (int num : result) {
        cout << num << " ";
    }
  

    return 0;
}