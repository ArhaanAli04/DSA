#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(int n,vector<int> &arr){
    int largest=arr[0];
    int secondLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }//if same elements in the array:
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int secondSmallestElement(int n,vector<int> &arr){
    int smallest=arr[0];
    int secondLargest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondLargest=smallest;
            smallest=arr[i];
        }//if same elements in the array:
        else if(arr[i]!=smallest && arr[i]<secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
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
    int a=secondLargestElement(n,arr);
    cout<<"\nThe  Second Largest Element is: "<<a;
    int b=secondSmallestElement(n,arr);
    cout<<"\nThe  Second Smallest Element is: "<<b;
    return 0;
}