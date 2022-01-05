//15.https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {

  public:

    bool canPair(vector<int> nums, int k) {

        vector<int> vec(k,0);

        for(int i=0;i<nums.size();i++){

            int x = nums[i]%k;

            if(x == 0){

                if(vec[x]==0)vec[x]++; 

                else

                    vec[x]--;

                continue;

            }

            if(vec[x]==0){

                vec[k-x]++;

            }

            else{

                vec[x]--;

            }

        }

        for(int i=0;i<k;i++){

            if(vec[i]>0)return false;

        }

        return true;

    }

};
