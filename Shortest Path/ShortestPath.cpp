#pragma once
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <vector>
#include <queue>
#include <climits>

int** G = nullptr;

// ------------------- Single Source (Dijkstra) -------------------
void Singlesource(int** graph, int start, std::vector<int>& shortestDistances) {
    int n = shortestDistances.size();
    std::vector<bool> visited(n, false);
    for (int i = 0; i < n; ++i) shortestDistances[i] = INT_MAX;
    shortestDistances[start] = 0;

    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second; pq.pop();
        if (visited[u]) continue;
        visited[u] = true;

        for (int v = 0; v < n; ++v) {
            if (graph[u][v] != 0 && shortestDistances[u] != INT_MAX &&
                shortestDistances[u] + graph[u][v] < shortestDistances[v]) {
                shortestDistances[v] = shortestDistances[u] + graph[u][v];
                pq.push({shortestDistances[v], v});
            }
        }
    }
}

// ------------------- All Pairs (Floyd-Warshall) -------------------
void Allpairs(int** graph, int n, std::vector<std::vector<int>>& dist, std::vector<std::vector<int>>& next) {
    dist.resize(n, std::vector<int>(n, INT_MAX));
    next.resize(n, std::vector<int>(n, -1));
    for (int i = 0; i < n; ++i) { dist[i][i] = 0; next[i][i] = i; }

    for (int u = 0; u < n; ++u)
        for (int v = 0; v < n; ++v)
            if (graph[u][v] < INT_MAX) { dist[u][v] = graph[u][v]; next[u][v] = v; }

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                    dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    next[i][j] = next[i][k];
                }
}

// ------------------- Transitive Closure -------------------
void TransitiveClosure(int** graph, std::vector<std::vector<int>>& transitiveClosure) {
    int n = transitiveClosure.size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            transitiveClosure[i][j] = graph[i][j] != 0 ? 1 : 0;

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                transitiveClosure[i][j] = transitiveClosure[i][j] || (transitiveClosure[i][k] && transitiveClosure[k][j]);
}

// ------------------- Fill DataGridView for All Pairs -------------------
void AllpairsTable(System::Windows::Forms::DataGridView^ dgv, const std::vector<std::vector<int>>& next) {
    int n = next.size();
    dgv->RowCount = n; dgv->ColumnCount = n;
    dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
    for (int i = 0; i < n; ++i) {
        dgv->Rows[i]->HeaderCell->Value = i.ToString();
        dgv->Columns[i]->HeaderCell->Value = i.ToString();
        for (int j = 0; j < n; ++j)
            dgv->Rows[i]->Cells[j]->Value = (next[i][j] == -1 ? "∞" : next[i][j].ToString());
    }
}
