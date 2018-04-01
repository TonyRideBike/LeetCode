#include "ReverseInteger.h"
#include <fstream>

class Solution {
public:
	int reverse(int x) {
		bool negtive = x < 0;
		long long number = negtive ? -x : x;
		long long ret = 0;
		while (number > 0) {
			ret = ret * 10 + number % 10;
			number = number / 10;
		}
		ret = ret > 0x7fffffff ? 0 : ret;
		return negtive ? -ret : ret;
	}
};

int ReverseInteger::run() {
	FILE* in = fopen("ReverseInteger.in", "r");
	FILE* out = fopen("ReverseInteger.out", "w");
	if (in == NULL) {
		fputs("File Error", stderr);
		exit(1);
	}

	Solution solution;

	int x;
	fscanf(in, "%d", &x);
	while (x != 0) {

		int result = solution.reverse(x);
		//std::cout << result << std::endl;
		fprintf(out, "%d\n", result);
		fscanf(in, "%d", &x);
	}

	fclose(in);
	fclose(out);
	return 0;
}
