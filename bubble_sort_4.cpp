#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,1,0,3,4};
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    //print the sorted array

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}