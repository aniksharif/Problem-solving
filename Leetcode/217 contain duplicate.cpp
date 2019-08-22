class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a,b;
         vector<int>::iterator ip;
        a=nums.size();
        sort(nums.begin(),nums.begin()+a);
        ip=unique(nums.begin(),nums.begin()+a);
        nums.resize(distance(nums.begin(), ip));
        b=nums.size();
        if(a==b)
            return false;
        else
            return true;
    }
};