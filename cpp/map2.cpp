#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapp;
        for(int i=0; i < nums.size(); i++){
            //cout << map[nums[i]] << endl;
            mapp[nums[i]] = i+1;
        }
        
        for(int i : nums){
            cout << mapp[i] << endl;
        }
        // Working as intended
        
        /*
        for(auto i=0; i < nums.size(); i++){
            int z = target - nums[i];
            if(map2[z] != 0){
                if(map[z]-1 == i) continue;
                vector<int> x { map[nums[i]]-1, map[z]-1 };
                return x;
            }
            else {
                if(map[z] != 0){
                    if(map[z]-1 == i) continue;
                    vector<int> x { map[nums[i]]-1, map[z]-1 };
                    return x;
                }
            }
        }
        */
        vector<int> x { 0, 0 };
        return x;
    }
};

int main (int argc, char *argv[])
{
    vector<int> x {3,3};
    int target = 6;
    Solution s;
    vector<int> z = s.twoSum(x,target); 
    //for(int i : z) cout << i << " "; cout << '\n';
    return 0;
}
