#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            //swap(arr[j-1],arr[j])
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            cout<<"Runs\n";
        }
    }
}
void printArray(int n,int arr[]){
    cout<<"\nThe array is given by: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(n,arr);
    printArray(n,arr);
    return 0;
}