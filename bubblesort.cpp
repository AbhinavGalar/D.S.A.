#include<iostream>
using namespace std;
int main(){
    int r;
    cout<"enter size of your array";
    cin>>r;
    cout<<"xode starts";
    if(r>=0 && r<20){
        for(int i=0;i<r;i++){
            cin>>arr[r];
        }
        bubble(arr[r]);
    }
    else{
        cout<<"not valid";
    }
}