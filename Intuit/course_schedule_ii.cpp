https://leetcode.com/problems/course-schedule-ii/

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> incomingEdgeCount(numCourses, 0);
        vector<vector<int>> edges(numCourses);
        
        for(vector<int>& pre : prerequisites){
            incomingEdgeCount[pre[0]]++;
            edges[pre[1]].push_back(pre[0]);
        }
        
        queue<int> qNoIncomingEdges;
        for(int i = 0; i < numCourses; i++){
            if(incomingEdgeCount[i] == 0){
                qNoIncomingEdges.push(i);
            }
        }
        
        int remainingEdgeCount = prerequisites.size();
        vector<int> ans;
        while(!qNoIncomingEdges.empty()){
            int cur = qNoIncomingEdges.front(); qNoIncomingEdges.pop();
            ans.push_back(cur);
            for(int nei : edges[cur]){
                remainingEdgeCount--;
                if(--incomingEdgeCount[nei] == 0){
                    qNoIncomingEdges.push(nei);
                }
            }
        }
        
        if(remainingEdgeCount != 0) ans.clear();
        
        return ans;
    }
};
