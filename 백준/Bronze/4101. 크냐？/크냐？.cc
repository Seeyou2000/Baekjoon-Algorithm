#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		int a, b;
		cin >> a >> b;
		if (!a && !b) {
			break;
		}
		if (a > b) {
			cout << "Yes\n";
		}
		else
			cout << "No\n";
	}
	return 0;
}