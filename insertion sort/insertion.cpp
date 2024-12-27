#include<iostream>
using namespace std;
void insrt (int arr[],int s){
    for(int i=1;i<s;i++){
        int chotu=i;
        while(chotu>0 && arr[chotu]<arr[chotu-1]){
            int temp;
            temp = arr[chotu-1];
            arr[chotu-1] = arr[chotu];
            arr[chotu]=temp;
            chotu--;
        }
    }
    
}
int main(){
    int arr[]={6,8,9,3,89,00};
    int s= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\n";
    }
    insrt (arr,s);
    cout<<"\n After appling insertion sort \n";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\n";

}
}