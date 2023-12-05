#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[j]>arr[i]) count++;
        }
        int aidx = n-count-1;
        if(aidx==0){
            if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx+1]){
                flag=false;
                break;
            }
        }
        else if(aidx==n-1){
            if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx+1] && arr[i]!=arr[aidx-1]){
                flag=false;
                break;
            }
        }
    }
    if(flag==false) cout<<"False";
    else cout<<"true";
}