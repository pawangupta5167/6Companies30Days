//https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void fun(int a[],int N,string &current,vector<string> &v,string m[],int ci){
        if(ci==N){
            v.push_back(current);
            return;
        }
        for(auto i:m[a[ci]]){
            current.push_back(i);
            fun(a,N,current,v,m,ci+1);
            current.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        string current="";
        vector<string> v;
        string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        fun(a,N,current,v,m,0);
        return v;
    }
};
