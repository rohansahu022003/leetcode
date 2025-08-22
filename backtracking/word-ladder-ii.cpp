class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return {};

        // map word -> id
        unordered_map<string, int> wordId;
        vector<string> idWord;
        auto getId = [&](const string& w) {
            if (!wordId.count(w)) {
                int id = idWord.size();
                wordId[w] = id;
                idWord.push_back(w);
            }
            return wordId[w];
        };

        int beginId = getId(beginWord);
        int endId   = getId(endWord);
        for (auto& w : wordList) getId(w);

        // Build pattern map for neighbors
        unordered_map<string, vector<int>> patternMap;
        int L = beginWord.size();
        for (int id = 0; id < idWord.size(); id++) {
            string w = idWord[id];
            for (int i = 0; i < L; i++) {
                string pat = w;
                pat[i] = '*';
                patternMap[pat].push_back(id);
            }
        }

        // BFS
        vector<vector<int>> parents(idWord.size());
        queue<int> q;
        q.push(beginId);

        vector<int> dist(idWord.size(), -1);
        dist[beginId] = 0;
        bool found = false;

        while (!q.empty() && !found) {
            int sz = q.size();
            unordered_set<int> levelVisited;
            while (sz--) {
                int cur = q.front(); q.pop();
                string w = idWord[cur];
                int d = dist[cur];

                for (int i = 0; i < L; i++) {
                    string pat = w;
                    pat[i] = '*';
                    for (int nei : patternMap[pat]) {
                        if (dist[nei] == -1) {
                            dist[nei] = d + 1;
                            parents[nei].push_back(cur);
                            q.push(nei);
                            levelVisited.insert(nei);
                        } else if (dist[nei] == d + 1) {
                            parents[nei].push_back(cur);
                        }
                        if (nei == endId) found = true;
                    }
                }
            }
        }

        if (!found) return {};

        // Backtrack paths
        vector<vector<string>> result;
        vector<int> path{endId};
        function<void(int)> dfs = [&](int u) {
            if (u == beginId) {
                vector<string> tmp;
                for (int i = path.size() - 1; i >= 0; i--)
                    tmp.push_back(idWord[path[i]]);
                result.push_back(tmp);
                return;
            }
            for (int p : parents[u]) {
                path.push_back(p);
                dfs(p);
                path.pop_back();
            }
        };

        dfs(endId);
        return result;
    }
};
