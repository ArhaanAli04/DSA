#include<iostream>
using namespace std;
void printArray(int n,int arr[]){
    cout<<"\nThe array is given by: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int no_of_time_repeated(int num,int n,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count=count+1;
        }
    }
    return count;
}
int using_hash(int num,int n,int arr[]){
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    return hash[num];
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
    printArray(n,arr);
    int num;
    while(num!=100){
        cout<<"\nEnter the number to be checked: ";
    cin>>num;
    int a=no_of_time_repeated(num,n,arr);
    cout<<num<<" is repeated "<<a<<" times";
    int b=using_hash(num,n,arr);
    cout<<"\nUsing hash "<<num<<" is repeated"<<b<<"times";
    }
    
    return 0;
}