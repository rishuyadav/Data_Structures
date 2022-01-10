//Graphs 
//n ->number of nodes
//m-> number of edges
//Storing graph in a data structure adjacency matrix
//six X six 2D matrix

#include<bits/stdc++.h>
int main()
{
	cin>>n>>m;

	//declare the adjcent matrix
	int adj[n+1][n+1];
	//take edge as input
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u][v] = 1;
		adj[v][u]= 1;

	}
	return 0;
}
void initialize(){
	for(int i =0;i<10;++i)
		for(int j=0;j<10;++j)
			A[i][j]= false;

}
//Storing he graph in adjacenc list
// vector<int> adj[6] creates an arra of size e6
//Declares a vector of int at every index
//Space complexity reduced from n^2 to N+2E
//if the graph is weighted instead of storing only adj node we will store pairs of both things
//Vector(adj,weight) better than N^2 used in adjacency matrix

#include<iostream>
using namespace std;
int main(){
	int n,m ;
	cin>>n>>m;
	vector<pair<int,int>> adj[n+1];
	for(int i=0;i<m;i++){
		int u,v,wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
}return 0;

//BFS
class Solution{
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
		vector<int> bfs;
		vector<int> vis(V+1,0);

		for(int i =1;i<=V;i++){
			if(!vis[i]){
				queue<int> q;
				q.push(i);
				vis[i]=1;
				while(!q.empty()){
					int node = q.front();
					q.pop();
					bfs.push_back(node);
					for(auto it: adj[node]){
						if(!vis[it]){
							q.push(it);
							vis[it] = 1;
						}
					}
				}
			}
			return bfs;
		}
	}
}
//DFS TRaversal in a graph
class Solution{
	void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storeDfs){
		storeDfs.push_back(node);
		vis[node]= 1;
		for(auto it: adj[node]){
			if(!vis[it]){
				dfs(it,vis,storeDfs);
			}
		}
	}
}
public:
vector<int> dfsOfGraph(int V, vector<int> adj[]){
	vector<int> storeDfs;
	vefctor<int> vis(V+1,0);
	for(int i =1;i<=V;i++{
		if(!vis[i]){
			dfs(i,vis,adj,storeDfs)
		}
	}
	return storeDfs;
}
}; 

//Cycle detection in Undirected Graphs
#include<bits/stdc++.h>
using namespace std;

 // o- based indexing code


class Solution {

public:
    bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(checkForCycle(it, node, vis, adj)) 
                    return true; 
            }
            else if(it!=parent) 
                return true; 
        }
        
        return false; 
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V+1, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, -1, vis, adj)) return true; 
	        }
	    }
	    
	    return false; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends


//Cycle detection using BFS
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {

public:
    bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited)
    {
        vector<int> parent(V, -1);
     
        // Create a queue for BFS
        queue<pair<int,int>> q;
     
        visited[s] = true;
        q.push({s, -1});
     
        while (!q.empty()) {
     
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
     
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, V, adj, vis)) return true; 
	        }
	    }
	    
	    return false; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends

//Bipartite Graph
