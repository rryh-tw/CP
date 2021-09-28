#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int tt = 1; tt <= t; tt++) {
		cout << "Scenario " << tt << endl;
		int p, n;
		cin >> p >> n;
		string s;
		getline(cin, s);
		map<string, int> mp;
		int id = 0;
		mp["Erdos, P."] = id++;
		vector<vector<int> > input;
		for(int k = 0; k < p; k++) {
			getline(cin, s);
			vector<int> node;
			int i = 0;
			while(i < s.length()) {
				while(isalpha(s[i]) == false) i++;
				string name = "";	
				while(!(s[i-1] == '.' && s[i] == ',') && s[i] != ':') name += s[i++];
				if(mp.count(name) == 0) mp[name] = id++;
				node.push_back(mp[name]);
				if(s[i] == ':') break;
			}
			input.push_back(node);
		}

		vector<vector<int> > G(mp.size());
		for(auto vc : input) {
			for(int i = 0; i < vc.size(); i++) {
				for(int j = 0; j < i; j++) {
					G[vc[i]].push_back(vc[j]);
					G[vc[j]].push_back(vc[i]);
				}
			}
		}

		vector<int> level(mp.size(), -1);
		queue<int> q;
		q.push(0); level[0] = 0;
		while(q.empty() == false) {
			int cur = q.front();  q.pop();
			for(int x : G[cur]) if(level[x] == -1) {
				level[x] = level[cur] + 1;
				q.push(x);
			}
		}
		for(int q = 0; q < n; q++) {
			string name;
			getline(cin, name);
			cout << name << ' ';	

			if(mp.count(name) == 0 || level[mp[name]] == -1) cout << "infinity" << endl;
			else cout << level[mp[name]] << endl;
		}


	}

}

