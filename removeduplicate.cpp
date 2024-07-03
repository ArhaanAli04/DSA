#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int n,vector<int> &arr){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
void printArray(int n,vector<int> &arr){
    cout<<"\nThe array is given by: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    sort(arr.begin(),arr.end());
    printArray(n,arr);
    int a=removeDuplicate(n,arr);
    cout<<"\nThe number of unique elements in the array are: "<<a;
    return 0;
}