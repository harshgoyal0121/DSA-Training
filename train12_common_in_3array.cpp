#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7, m= 5, p=4;
    int arr1[n]={10, 26, 29, 50, 55, 90, 95};
    int arr2[m]={10, 26, 50, 95, 105};
    int arr3[p]={5, 15, 10, 50};

    vector<int> vec;
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j])
                vec.push_back(arr1[i]);
        }
    }
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<p; j++){
            if(arr3[j]==vec[i])
                cout<<vec[i]<<" ";
        }
    }

}
