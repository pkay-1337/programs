#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        unordered_map<int,int> map2;
        for(int i=0; i < nums.size(); i++){
            //cout << map[nums[i]] << endl;
            if(map[nums[i]] != 0){
                map2[nums[i]] = i+1;
            }else map[nums[i]] = i+1;
        }
        
        for(int x : nums){
            if(map2[x] != 0){
                cout << "map2 " << map2[x] << endl;
                map2[x] = 0;
            }else cout << "map " << map[x] << endl;
        }
        // Working as intended
        
        
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
    for(int i : z) cout << i << " "; cout << '\n';
    return 0;
}
