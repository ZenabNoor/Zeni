#include<iostream>
using namespace std;
void selection_sort(int arr[], int sz){
for(int i=0;i<=sz-1;i++){
        int maxi=i;
        for(int j=i+1;j<sz;j++){
            if(arr[j]>arr[maxi]){
                maxi=j;
            }}
           int temp=arr[maxi];
           arr[maxi]=arr[i];
           arr[i]=temp;
}}
int main(){
    int sz=10;
int arr[sz];
for(int i=0; i<sz;i++){
        cout<<"The element at index = "<<i<<" is= ";
cin>>arr[i];}
cout<<"Before sorting, array is="<<endl;
for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";}
    selection_sort(arr,sz);
    cout<<"After sorting, array is="<<endl;
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;


return 0;
}
