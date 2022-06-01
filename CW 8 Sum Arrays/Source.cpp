#include<iostream>
#include <vector>
#include<numeric>
using namespace std;

int sum(const vector<int>& nums) {
	return accumulate(nums.begin(), nums.end(), 0);
}

int main() {
	vector<int> nums = { 1, 2, -3, 3, 4 };
	cout << sum(nums) << endl;
	return 0;
}