#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    cout<<"Enter the sum u wanna check--> "<<endl;
    cin>>sum;

    vector<int>arr{10,20,30,40,60,70};

    // print all pairs
    for(int i = 0 ; i<arr.size(); i++){
        int element = arr[i];

    // for every element , will traverse the aage wala element
        for (int j = i+1 ; j<arr.size() ; j++){
            if(element + arr[j] == sum){
                cout<<"Pair Found -> "<< element <<" "<<arr[j]<<endl;
            }
        }
    }
}