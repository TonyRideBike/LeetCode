#include "RomanToInteger.h"


class Solution {
public:

	unordered_map <char, int> romanMap = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	};

	int romanToInt(string s) {
		if (s == "") return 0;

		int decimal = romanMap[s[0]];
		int pre = decimal;
		int num = 0;

		for (unsigned int i = 1; i < s.size(); i++) {
			num = romanMap[s[i]];
			decimal = num > pre ? decimal + num - pre - pre : decimal + num;
			pre = num;
		}

		return decimal;
	}
};


int RomanToInteger::run() {
	FILE* in = fopen("RomanToInteger.in", "r");
	FILE* out = fopen("RomanToInteger.out", "w");
	if (in == NULL) {
		fputs("File Error", stderr);
		exit(1);
	}

	Solution solution;

	char _roman[16];
	fscanf(in, "%s", _roman);
	string roman = _roman;
	while (roman != "0") {
		int result = solution.romanToInt(roman);
		std::cout << result << std::endl;
		fprintf(out, "%d\n", result);
		fscanf(in, "%s", _roman);
		roman = _roman;
	}

	fclose(in);
	fclose(out);
	return 0;
}