#include <iostream>
#include <vector>
using namespace std;

vector<int> unionSortedArrays(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> unionArr;

    
    while (i < a.size() && j < b.size()) {
        while (i > 0 && i < a.size() && a[i] == a[i - 1]) {
            i++;
        }
  
        while (j > 0 && j < b.size() && b[j] == b[j - 1]) {
            j++;
        }
        
     
        if (i >= a.size() || j >= b.size()) break;


        if (a[i] < b[j]) {
            unionArr.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            unionArr.push_back(b[j]);
            j++;
        } else {
            
            unionArr.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < a.size()) {
        if (i == 0 || a[i] != a[i - 1]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

  
    while (j < b.size()) {
        if (j == 0 || b[j] != b[j - 1]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 3, 5, 6};

    vector<int> result = unionSortedArrays(a, b);

    cout << "Union of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
