//12.Find total number of Squares in a N*N chessboard

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void countSquares( n)
    {
        cout << (n * (n + 1) / 2) * (2*n + 1) / 3 <<endl;
    }
};
