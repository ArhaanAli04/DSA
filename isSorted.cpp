#include<bits/stdc++.h>
using namespace std;
bool isSorted(int n,vector<int > &arr){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            cout<<"\nArray is not sorted";
            return false;
        }
    }
    cout<<"\nArray is sorted";
    return true;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"\nEnter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    isSorted(n,arr);
    return 0;
    
}