#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    int leftarr[n1];
    int rightarr[n2];
    for(int i=0;i<n1;i++){
        leftarr[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
       rightarr[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=left;
    while(i<n1&&j<n2){
        if(leftarr[i]<=rightarr[j]){
            arr[k]=leftarr[i];
            i++;
        }
        else{
            arr[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=leftarr[i];
        i++;
        k++;
    }
    while(i<n2){
        arr[k]=rightarr[j];
        j++;
        k++;
    }
}
void divide(int arr[],int left,int right){
    if(left<right){
        int mid = left + (right-left)/2;
        divide(arr,left,mid);
        divide(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    divide(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" "; 
    }
}
