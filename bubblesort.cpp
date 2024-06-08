#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int n,int arr[]){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                //swap arr[j] and arr[j+1]
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    Bubblesort(n,arr);
    printArray(n,arr);
    return 0;
}
