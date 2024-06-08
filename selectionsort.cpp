#include<bits/stdc++.h>
using namespace std;
void selectionSort(int n,int arr[]){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        //swap arr[min] and arr[i]
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
    selectionSort(n,arr);
    printArray(n,arr);
    return 0;
}