//method-1 using extra space
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{4,2,9,7,8};
    int n = v.size();
    vector<int>vv(n);
     for(int i=0;i<n;i++){
        vv[i]=v[i];
     }
     sort(v.begin(),v.end());
     bool flag  = true;
    for(int i=0;i<n;i++){
       if(i==0){
        if(vv[i]!=v[i] && vv[i]!=v[i+1]){
            flag = false;
            break;
        }
       }
      else if(i==n-1){
            if(vv[i]!=v[i] && vv[i]!=v[i-1]){
                flag=false;
                break;
            }
       }
       else{
        if(vv[i]!=v[i] && vv[i]!=v[i+1] && vv[i]!=v[i-1]){
            flag=false;
            break;
        }
       }
    }
    if(flag==false) cout<<"NOT";
    else cout<<"YES";
   
    //print array
    //  for(int i=0;i<n;i++){
    //    cout<<vv[i]<<" ";
    //  }
}