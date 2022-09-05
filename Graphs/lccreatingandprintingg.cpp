vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    vector<vector<int>> adjlist(n);
    
    //insert the nodes in list
    for(int i=0;i<n;i++){
        adjlist[i].push_back(i);
    }
    //insert nodes with edges to the node
    for(int i=0;i<m;i++){
        adjlist[edges[i][0]].push_back(edges[i][1]);
        adjlist[edges[i][1]].push_back(edges[i][0]);
    }
    
    return adjlist;
}