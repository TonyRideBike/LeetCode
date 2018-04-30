#include "LongestCommonPrefix.h"

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) return "";
		string prefix = strs[0];
		for (int i = 1; i < strs.size(); i++) {
		}
	}
};

int LongestCommonPrefix::run() {
	FILE * input = fopen("LongestCommonPrefix.in", "r");
	FILE * output = fopen("LongestCommonPrefix.out", "w");

	vector<string> vectorOfStrings;

	Solution solution;

	cout << solution.longestCommonPrefix(vectorOfStrings) << endl;

	fclose(input);
	fclose(output);
	return 0;
}