#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;

	while (0 < (t--)) {
		auto s = string{};
		cin >> s;

		const auto& n = s.length();

		auto isDown = bool{ false };
		for (auto i = 0; i < n; ++i) {
			if ('D' == s[i]) {
				cout << i << '\n';
				isDown = true;
				break;
			}
		}

		if (!isDown) {
			cout << n << '\n';
		}
	}

	return 0;
}