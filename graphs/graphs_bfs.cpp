#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

	/* Helper function to perform BFS
	traversal from the node */
	void bfs(int node, vector<vector<int>>& adj, int vis[],
	         vector<int> &ans) {

		// Queue data structure
		queue<int> q;

		// Push the starting node
		q.push(node);

		// Until the queue is empty
		while(!q.empty()) {

			// Get the node
			int node = q.front();
			q.pop();

			// Add the node to answer
			ans.push_back(node);

			// Traverse for all its neighbours
			for(auto it : adj[node]) {

				/* If the neighbour has previously not been
				visited, store in Q and mark as visited */
				if(!vis[it]) {
					vis[it] = 1;
					q.push(it);
				}
			}
		}

		// Return
		return;
	}


	/* Helper function to recursively
	perform DFS from the node */
	void dfs(int node, vector<vector<int>>& adj, int vis[],
	         vector<int> &ans) {

		// Mark the node as visited
		vis[node] = 1;

		// Add the node to the result
		ans.push_back(node);

		// Traverse all its neighbours
		for(auto it : adj[node]) {

			// If the neighbour is not visited
			if(!vis[it]) {

				// Perform DFS recursively
				dfs(it, adj, vis, ans);
			}
		}
	}

public:

	/* Function to return a list containing
	the DFS traversal of the graph */
	vector<int> dfsOfGraph(int V, vector<vector<int>> edges) {
		// Visited array
		
	    int vis[V]; 
        for(int i = 0; i < V; i++) {
         vis[i] = 0;
        }

		// Create a list to store DFS
		vector<int> ans;

		// Create adjacency list from edges
		vector<vector<int>> adj(V);
		for(auto& edge : edges) {
			adj[edge[0]].push_back(edge[1]);
			adj[edge[1]].push_back(edge[0]); // Assuming undirected graph
		}

		// Traverse all the nodes
		for(int i=0; i < V; i++) {

			// If the node is unvisited
			if(vis[i] == 0) {

				// Call DFS from that node
				dfs(i, adj, vis, ans);
			}
		}

		// Return the result
		return ans;
	}

	/* Function to return a list containing
	the BFS traversal of the graph */
	vector<int> bfsOfGraph(int V, vector<vector<int>> edges) {

		// Visited array
		int vis[V]; 
        for(int i = 0; i < V; i++) {
           vis[i] = 0;
        }

		// To store the result
		vector<int> ans;

		// Create adjacency list from edges
		vector<vector<int>> adj(V);
		for(auto& edge : edges) {
			adj[edge[0]].push_back(edge[1]);
			adj[edge[1]].push_back(edge[0]); // Assuming undirected graph
		}

		// Traverse all the nodes
		for(int i=0; i < V; i++) {

			// If the node is unvisited
			if(vis[i] == 0) {
			    
			    // Mark the node as visited
                vis[i] = 1;
                
				// Call BFS from that node
				bfs(i, adj, vis, ans);
			}
		}

		return ans;
	}
};

int main() {
	int V = 5;
	vector<vector<int>> edges = {
		{0, 1},
		{0, 2},
		{0, 3},
		{2, 4}
	};

	// Creating instance of Solution class
	Solution sol;

	// Function call to get the BFS traversal of graph
	vector<int> bfs = sol.bfsOfGraph(V, edges);

	// Function call to get the DFS traversal of graph
	vector<int> dfs = sol.dfsOfGraph(V, edges);

	// Output
	cout << "The BFS traversal of the given graph is: ";
	for(int i=0; i < bfs.size(); i++) {
		cout << bfs[i] << " ";
	}
	cout << "\nThe DFS traversal of the given graph is: ";
	for(int i=0; i < dfs.size(); i++) {
		cout << dfs[i] << " ";
	}

	return 0;
}
