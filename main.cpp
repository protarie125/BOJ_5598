#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto& n = s.length();
	for (auto i = 0; i < n; ++i) {
		s[i] -= 3;
		if (s[i] < 'A') {
			s[i] += 26;
		}
	}

	cout << s;

	return 0;
}