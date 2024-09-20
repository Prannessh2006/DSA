#include<iostream>
using namespace std;
int main(){
    int n,value;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> value;
    int count=0;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==value){
            int h=1;
            while(h+mid<=n-1 || mid-h>=0){
                if(arr[mid+h]==value){
                    count+=1;
                }
                if(arr[mid-h]==value){
                    count+=1;
                }
                if(arr[mid+h]!=value && arr[mid-h]!=value){
                    break;
                }
                h++;
            }
            cout << "Count: "<<count;
            return 0;
        }
        else if(arr[mid]>value){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout << "Element not found";
}
