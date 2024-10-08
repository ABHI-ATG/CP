#include <bits/stdc++.h>
using namespace std;
/* Atg */
// no of edges which will removes so that graph will split into two peices

void dfs(int source, vector<vector<int>> &graph, int time[], int low[], vector<int> &vis, int &timer, int par){
    time[source] = low[source] = timer++;
    vis[source] = 1;
    for (auto it : graph[source]){
        if (it == par)continue;
        else if (vis[it])low[source] = min(low[source], time[it]);
        else{
            dfs(it, graph, time, low, vis, timer, source);
            low[source] = min(low[source], low[it]);
            if (time[source] < low[it]){
                cout << source << " " << it << endl;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int time[n + 1];
    int low[n + 1];
    for (int i = 0; i <= n; i++)
    {
        low[i] = time[i] = 0;
    }
    vector<int> vis(n + 1, 0);
    int timer = 0;
    dfs(1, graph, time, low, vis, timer, -1);

    return 0;
}
