#include<iostream>
#include<vector>
using namespace std;
using namespace std;

int missingNo(int n, vector<int>& arr)
{
 
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }


    int expectedSum = (n * (n + 1)) / 2;
    return expectedSum - sum;
}


int main()
{
    vector<int> arr = { 1, 2,3,5 };
    int n = 5;
    cout <<"the Missing no in give array is:" <<missingNo(n, arr);
    return 0;
}