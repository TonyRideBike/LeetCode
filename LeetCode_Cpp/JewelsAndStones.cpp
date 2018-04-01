#include "JewelsAndStones.h"
#include <fstream>

using std::string;

JewelsAndStones::JewelsAndStones()
{
}


JewelsAndStones::~JewelsAndStones()
{
}

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int count = 0;
		for (int i = 0; i < S.size(); i++) {
			if (J.find(S[i]) < 0) {
				count++;
			}
		}
		return count;
	}
};

int JewelsAndStones::run() {
	FILE * in = fopen("JewelsAndStones.in", "r");
	FILE * out = fopen("JewelsAndStonres.out", "w");
	if (NULL == in) {
		fputs("input file error", stderr);
		exit(1);
	}

	Solution solution;
	string j, s;
	
	while (j != "END") {
		fprintf(out, "%d\n", solution.numJewelsInStones(j, s));
		fscanf(in, "%s %s", j, s);
	}
	fclose(in);
	fclose(out);
	return 0;
}


