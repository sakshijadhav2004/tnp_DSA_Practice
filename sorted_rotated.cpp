#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if( arr[i]>arr[(i+1)%n]){
            count=count+1;
        }
    }
    return count<=1;
}
int main(){
    vector<int> arr={2,1,3,4};
    int n=arr.size();
    if(check(arr,n))
        cout<<"yes\n";
    else
        cout<<"NO";
        return 0;
}