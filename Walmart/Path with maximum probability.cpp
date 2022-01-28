//https://leetcode.com/problems/path-with-maximum-probability/description/

class Solution {

public:

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {

        vector<vector<pair<int, double>>> adjList(n);

        

        for(int i = 0; i < edges.size(); ++i){

            adjList[edges[i][0]].push_back({edges[i][1], succProb[i]});

            adjList[edges[i][1]].push_back({edges[i][0], succProb[i]});

        }

        

        //max probability from start node

        vector<double> maxProb(n, 0.0);

        maxProb[start] = 1.0;

        

        queue<pair<int, double>> q;

        q.push({start, 1.0});

        

        while(!q.empty()){

            pair<int, double> cur = q.front(); q.pop();

            int curNode = cur.first;

            double curProb = cur.second;

            

            for(pair<int, double>& nei : adjList[curNode]){

                int neiNode = nei.first;

                double neiProb = nei.second;

                

                if(curProb * neiProb > maxProb[neiNode]){

                    maxProb[neiNode] = max(maxProb[neiNode], curProb * neiProb);

                    q.push({neiNode, maxProb[neiNode]});

                }

            }

        }

        

        return maxProb[end];

    }

};
