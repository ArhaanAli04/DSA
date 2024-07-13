#include<bits/stdc++.h>
using namespace std;
int twosum(int n,vector<int>arr,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target && i!=j){
                return i,j;
            }
        }
    }

}
void printArray(int n,vector<int>arr){
    cout<<"\nThe array is given by: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"\nEnter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(n,arr);
    int target;
    cout<<"\nEnter the target : ";
    cin>>target;
    int a=twosum(n,arr,target);
    cout<<"\nThe indices of the elements are:"<<a;
    return 0;
}