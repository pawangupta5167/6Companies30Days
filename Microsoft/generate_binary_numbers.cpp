//https://www.google.com/url?q=https://www.google.com/url?q%3Dhttps://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/%26amp;sa%3DD%26amp;source%3Deditors%26amp;ust%3D1642318388501310%26amp;usg%3DAOvVaw0VDpfHVZjxr5KG1aG1tlMN&sa=D&source=docs&ust=1642318388513372&usg=AOvVaw0BGDvOEuTi03eu1ET4hGPd

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    // Your code here
    vector<string> ans;
    string s = "";
    for (int i = 1; i <= N; i++)
    {
        int a = i;
        while (a > 0)
        {
            int b = a % 2;
            s = to_string(b) + s;
            a = a / 2;
        }
        ans.push_back(s);
        s = "";
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends
