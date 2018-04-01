#include "sqrtx.h"

class Solution {
public:
	int mySqrt(int x) {
		if (x == 0) {
			return 0;
		}
		if (x == 1) {
			return 1;
		}
		double root = x;
		while ((root * root - x) >= 1) {
			root = (root + x / root) / 2;
			//cout << "root = " << root << "\troot*root = " << root * root << endl;
		}
		return (int)root;
	}
};

int Sqrtx::run() {
	int x;
	cin >> x;
	Solution solution;
	cout << solution.mySqrt(x) << endl;
	return 0;
};
