#include "JewelsAndStones.h"
#include <fstream>
#include <iostream>

using namespace std;

/* https://leetcode.com/problems/jewels-and-stones/description/ */

JewelsAndStones::JewelsAndStones()
{
}


JewelsAndStones::~JewelsAndStones()
{
}

class Solution {
public:
	int numJewelsInStones(std::string J, std::string S) {
		int count = 0;
		for (char stone : S) {
			for (char jewel : J) {
				if (jewel == stone) count++;
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
	std::string j, s;
	char jewel[50], stone[50];
	fscanf(in, "%s %s", jewel, stone);
	j = jewel;
	s = stone;
	fprintf(out, "%d\n", solution.numJewelsInStones(j, s));  

	fclose(in);
	fclose(out);
	return 0;
}


