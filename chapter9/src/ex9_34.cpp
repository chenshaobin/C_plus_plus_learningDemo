#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	vector<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;		// 如果没有加上这条语句，循环将永不终止地执行下去
	}

	for (auto i : vi) cout << i << " ";

	return 0;
}