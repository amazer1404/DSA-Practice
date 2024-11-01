// intersection

#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{3,3,4,10};

    vector<int>ans;

    // Outer Loop on array vector
    for(int i = 0 ; i<arr.size() ; i++){
        int element = arr[i];
        // for every element, run loop on brr
        for(int j = 0 ; j<brr.size() ; j++){
            if(element == brr[j]){
                // pehle to mark karlo taaki element repeat na ho!
                brr[j]=-1;
                ans.push_back(element);
            }
        }

    }

    // print ans
    for (auto value:ans){
        cout<<value<<" ";
    }
    


    return 0;
}