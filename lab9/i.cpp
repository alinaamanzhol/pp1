#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums;
   
    
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        bool notfind = true;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]==k){
                notfind=false;
                break;
            }
        }
        if(nums.empty()||notfind){
            nums.push_back(k);
        }
    }

    do{
        for(int i : nums){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    while(next_permutation(nums.begin(), nums.end()));

    return 0;
    
}