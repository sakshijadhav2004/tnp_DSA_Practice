#include <iostream>
using namespace std;

int largestelement(int arr[],int n){
        int i;
        int largest=arr[0];
        for (i=1;i<n;i++)
            if(arr[i]>largest)
                largest=arr[i];
        return largest;
    }

int main() {
    int arr1[]={1,8,7,56,90};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={5,5,5,5};
     int n1=sizeof(arr2)/sizeof(arr2[0]);


    cout<<"largest element in array is\n"<<largestelement(arr1,n);
    
    cout<<"largest element in array is"<<largestelement(arr2,n1);
    
    
    return 0;
}