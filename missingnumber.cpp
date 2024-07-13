#include<bits/stdc++.h>
using namespace std;
void printArray(int n,vector<int>arr){
    cout<<"\nThe array is given by: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int BruteForce(int n,vector<int>arr){
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
                
            }
        }
        if(flag==0){
            return i;
        }
    }
}
int main(){
    int n;
    cout<<"Enter ther number of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(n,arr);
    int a=BruteForce(n,arr);
    cout<<"\nThe missing number is: "<<a;

    return 0;
}