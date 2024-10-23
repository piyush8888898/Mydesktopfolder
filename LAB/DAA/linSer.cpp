// #include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Elements: "<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int a;
    cout<<"Enter elements want to search: ";
    cin>>a;
    for(int i=0;i<n;i++){
        if(v[i]==a){
            cout<<"Element "<< v[i] << " found at index "<< i << endl;
            return 0;
        }
       
    }
        cout<<"element not found"<<endl;
    

}