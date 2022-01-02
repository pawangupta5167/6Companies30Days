//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#companyTags
string encode(string s) { 
int count=1; 
for(int i=0;i<s.length();i++) {
 if(s[i]==s[i+1])
count++; 
else 
cout<<s[i]<<count,count=1; 
} 
} 
