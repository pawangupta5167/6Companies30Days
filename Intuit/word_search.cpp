//https://practice.geeksforgeeks.org/problems/word-search/1/#

// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends

class Solution {

public:

    bool DFS(vector<vector<char>>& board, string word, int i, int j, int n) {

 //check if all the alphabets in the word is checked

       if(n == word.size()) return true; 

       

 //check if i and j are out of bound or if the characters aren't equal

       if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[n]) return false;

       

 //mark as visited 

       board[i][j] = '0';

       

 //branch out in all 4 directions

       bool status = DFS(board, word, i + 1, j, n + 1) ||  //down

                       DFS(board, word, i, j + 1, n + 1) ||  //right

                       DFS(board, word, i - 1, j, n + 1) ||  //up

                       DFS(board, word, i, j - 1, n + 1);  //left

       

 //change the character back for other searches

       board[i][j] = word[n];

 

       return status;

   }

   

   bool isWordExist(vector<vector<char>>& board, string word) {

       if(word == "") return false;

       

       for(int i = 0; i < board.size(); i++) 

           for(int j = 0; j < board[i].size(); j++) 

   //check if the characters are equal then call DFS

               if(board[i][j] == word[0] && DFS(board, word, i, j, 0))

                   return true;

       

       return false;

   

   }

};

// { Driver Code Starts.

int main(){

	int tc;

	cin >> tc;

	while(tc--){

		int n, m;

		cin >> n >> m;

		vector<vector<char>>board(n, vector<char>(m, '*'));

		for(int i = 0; i < n; i++)

			for(int j = 0; j < m; j++)

				cin >> board[i][j];

		string word;

		cin >> word;

		Solution obj;

		bool ans = obj.isWordExist(board, word);

		if(ans)

			cout << "1\n";

		else cout << "0\n";

	}

	return 0;

}  // } Driver Code Ends
