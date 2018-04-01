#include "FizzBuzz.h"

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> result;
		for (int i = 1; i <= n; i++) {
			string word = "";
			if (0 == i % 3) {
				word += "Fizz";
			}
			if (0 == i % 5) {
				word += "Buzz";
			}
			if (word == "") {
				word = std::to_string(i);
			}
			result.push_back(word);
		}
		return result;
	}
};

int FizzBuzz::run() {
	FILE * in = fopen("FizzBuzz.in", "r");
	FILE * out = fopen("FizzBuzz.out", "w");
	if (in == NULL) {
		fputs("File Error", stderr);
		exit(1);
	}

	Solution solution;
	int n = 1;
	fscanf(in, "%d", &n);
	while (n > 0) {
		vector<string> result;
		result = solution.fizzBuzz(n);
		fscanf(in, "%d", &n);
		for (auto s = result.begin(); s != result.end(); ++s) {
			fprintf(out, "\"%s\",\n", s);
		}
		fprintf(out, "\n");
	}

	fclose(in);
	fclose(out);
	return 0;
}
