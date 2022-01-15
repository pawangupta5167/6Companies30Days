//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/

class Solution

{

    public:

    int FindMaxSum(int arr[], int n)

    {

        vector<int> dp(n);

        dp[0] = arr[0];

        dp[1] = max(dp[0],arr[1]);

        for(int i=2;i<n;i++){

            dp[i] = max(dp[i-1], arr[i]+dp[i-2]);

        }

        return dp[n-1];

    }

};
