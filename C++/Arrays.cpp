// Find the Duplicate numbers in an given array
/* solution:- By using Hash map we can find the duplicates in the given array
    1 - we sort the given array
    2 - make an unordered map
    3 - get the frequency to the map
    4 - if any map contain freq >= 2 return true

*/
#include<bit/stdc++.h>
#include<vector>
#include<map>


bool findDup(std::vector<int> arr){
    int size_of_array = arr.size();        
    sort(arr.begin(),arr.end());        // 1
    std:: unordered_map<int,int> ans;   // 2
    for(int i = 0; i< size_of_array;i++){
        ans[arr[i]++];  // 3
    }
    for(auto j = ans.begin();j!=ans.end();j++){
        if(j->second>=2){
            return 1;          // 4
        }
    }
    return 0;
}

int main(){
    std::vector<int> arr;
    std::cout << findDup(arr);
}
