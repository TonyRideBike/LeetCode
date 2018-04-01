#include "PalindromeNumber.h"
#include <fstream>

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0))
			return false;
		int half = 0;
		while (x > half) {
			half = half * 10 + x % 10;
			x = x / 10;
		}
		return x == half || x == half / 10;
	}
};

int PalindromeNumber::run() {
	FILE* in = fopen("PalindromeNumber.in", "r");
	FILE* out = fopen("PalindromeNumber.out", "w");
	if (in == NULL) {
		fputs("File Error", stderr);
		exit(1);
	}

	Solution solution;

	int x;
	fscanf(in, "%d", &x);
	while (x != 0) {

		bool result = solution.isPalindrome(x);
		//std::cout << result << std::endl;
		fprintf(out, "%s\n", result ? "true" : "false");
		fscanf(in, "%d", &x);
	}

	fclose(in);
	fclose(out);
	return 0;
}