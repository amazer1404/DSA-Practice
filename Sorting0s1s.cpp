#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr{0,1,1,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0};
    int start =0;
    int end = arr.size() - 1;
    int i = 0;

    while (i!=end){
        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;

        }
    }

    // print
    for(auto val : arr){
        cout<<val<<" ";
    }
}