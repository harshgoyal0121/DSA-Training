#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {8, 3, 5, 2, 9, 1, 7, 10, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    vector<pair<int, int>> vec;
    for(int i=0; i<=max; i++){
        vec.push_back({i, 0});
    }

    cout << endl;
    for(int i=0; i<n ;i++){
        vec[arr[i]].second++;
        cout<< vec[i].first << " "<< vec[i].second<< " ";
    }

    cout << endl;
    int x=0;
    for(int i=0; i<=vec.size(); i++){
        while(vec[i].second>0){
            arr[x]=vec[i].first;
            x++;
            vec[i].second--;        }
    }
    for(int i =0; i<n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
