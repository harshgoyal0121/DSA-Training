//using binary search find the occurence of a particular element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7;
    int arr[n]={50, 10, 26, 5, 50, 90, 50};
    sort(arr, arr+n);

    for(int i =0; i<n; i++){
        cout << arr[i]<<" ";
    }
    int key, count = 0;
    cin>>key;
    int l=0, h=n-1, mid=0, temp = 0;
    while(l<h){
        mid=(l+h)/2;
        if(arr[l]==key){
            count++;
        }
        else if(arr[h]==key){
            count++;
        }
        else if(arr[mid]==key)
            count++;
        h--;
        l++;
        cout << count<< " ";
    }
    cout << endl << count;
    return 0;
}