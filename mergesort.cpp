#include<bits/stdc++.h>
using namespace std;
void merge(int n,vector<int> &arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&& right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void MergeSort(int n,vector<int> &arr,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(n,arr,low,mid);
        MergeSort(n,arr,mid+1,high);
        merge(n,arr,low,mid,high);
    }
    
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
    MergeSort(n,arr,0,n-1);
    printArray(n,arr);
    
    return 0;
}