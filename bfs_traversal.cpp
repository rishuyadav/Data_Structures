#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n,vector<int> adj[]){
	vector<int>bfs;
	vector<int> visited(n,0);
	for(int i =0;i<n;i++){
		if(!visited[i]){
			queue<int> q;
			q.push(i);
			visited[i]=1;
			while(!q.empty()){
				int node = q.front();
				q.pop();
				bfs.push_back(node);
				for(auto it: adj[node]){
					if(!visited[it]){
						q.push(it);
						visited[it]= 1;
					}
				}
			}
		}
		return bfs;
	}
}

int main(){
//Taking input of the graph as adjacency list
	int n,e;//Number of nodes and number of edges
	cin>>n>>e;
	vector<int> adj[n]//Declaring adjacency list of size of number of nodes
	//Taking input of the edges

	while(e--){
		int u,v;//Declaring nodes whose input is to be taken
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	bfs(n,adj);
}