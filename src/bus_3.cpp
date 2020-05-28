#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
	map<int, set<string>> bus;
	int buses = 1;
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		set<string> temp;
		for (int z = 0; z < n; ++z) {
			string bus_name;
			cin >> bus_name;
			temp.insert(bus_name);
		}
		int zzzz = 0;
		for (auto& x : bus) {
			if (x.second == temp) {
				cout << "Already exists for " << x.first << endl;
				zzzz = 1;
				break;
			}
		}
		if (zzzz == 0) {
			bus[buses] = temp;
			cout << "New bus " << buses << endl;
			buses++;
		}
	}
	return 0;
}
