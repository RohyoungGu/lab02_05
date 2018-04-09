#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(const int a, const int b) {
	return a > b;
}

void main() {
	vector<int> arr;
	int num;
	while (cin >> num) {
		arr.push_back(num);
	}
	cout << endl;
	cout << "ordered array" << endl;

	sort(arr.begin(), arr.end(), compare);

	for (auto i: arr) {
		cout << i << " ";
	}
	cout << endl;
	
	system("PAUSE");
}