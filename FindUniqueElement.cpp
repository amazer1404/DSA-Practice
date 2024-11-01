#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int>arr){
    int ans =0;
    for(int i = 0 ; i<arr.size() ; i++ ){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    vector<int>arr(n);
    
    cout<<"Enter elements -> "<<endl;
    for(int i = 0 ; i<arr.size() ; i++ ){
        cin>>arr[i];
    }

    int UniqueElement = findUnique(arr);

    cout<<"The unique element in the array is "<< UniqueElement<<endl;
}