#include <iostream>
#include <vector>
using namespace std;

int Single(const vector<int>& arr) {


    for (int i = 0; i < arr.size(); i++) {

   
        int count = 0;

        for (int j = 0; j < arr.size(); j++) {

        
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    vector<int> arr = { 4,2,4};
    cout << Single(arr) << endl;
    return 0;
}