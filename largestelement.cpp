#include<bits/stdc++.h>
using namespace std;
int largestElement(int n,vector<int> &arr){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int smallestElement(int n,vector<int> &arr){
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=largestElement(n,arr);
    cout<<"\nThe Largest Element is: "<<a;
    int b=smallestElement(n,arr);
    cout<<"\nThe Smallest Element is: "<<b;
    return 0;
}