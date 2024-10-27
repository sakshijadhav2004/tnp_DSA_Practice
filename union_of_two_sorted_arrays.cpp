#include <iostream>
#include<vector>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        long long s = 0; 
        for (int j = i; j < n; j++) { 
            
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> a = {10, 5, 2, 7, 1,9};
    long long k = 15;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len ;
    return 0;

}