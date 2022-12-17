//robin carp
#include<bits/stdc++.h>
using namespace std;

int hashs(string str, int n, int temp){
    int hash1=0;
    int len=n;
    for(int i=0; i<len; i++){
        hash1 = hash1 +(str[i]*(pow(temp,(n-1))));
        n--;
    }
    return hash1;
}

int main(){
    string str = "Harsh Goyal is a very good boy";
    int n = str.length();
    string pat = "very";
    int m = pat.length();
    int temp = 7;
    int hash1=hashs(pat, m, temp);
    cout<<hash1<<endl;
    int hash2=0, flag=0;

    for(int i = 0; i<n; i++){
        char t;
        m=pat.length();
        hash2=0;

        for(int j = i; j<pat.length()+i; j++){
            t=str[j];
            hash2 = hash2+t*pow(temp,(m-1));
            m--;
            if(hash2==hash1){
                flag=1;
                break;
            }
        }
    }
    cout << endl;
    if(flag==0){
        cout<<"not found";
    }
    else
        cout << "Found";
    return 0;
}