package com.tonylyu.dev.solutions;

import java.util.*;

/*
 * @lc app=leetcode id=412 lang=java
 *
 * [412] Fizz Buzz
 *
 * https://leetcode.com/problems/fizz-buzz/description/
 *
 * algorithms
 * Easy (59.07%)
 * Total Accepted:    189.3K
 * Total Submissions: 320.5K
 * Testcase Example:  '1'
 *
 * Write a program that outputs the string representation of numbers from 1 to
 * n.
 * 
 * But for multiples of three it should output “Fizz” instead of the number and
 * for the multiples of five output “Buzz”. For numbers which are multiples of
 * both three and five output “FizzBuzz”.
 * 
 * Example:
 * 
 * n = 15,
 * 
 * Return:
 * [
 * ⁠   "1",
 * ⁠   "2",
 * ⁠   "Fizz",
 * ⁠   "4",
 * ⁠   "Buzz",
 * ⁠   "Fizz",
 * ⁠   "7",
 * ⁠   "8",
 * ⁠   "Fizz",
 * ⁠   "Buzz",
 * ⁠   "11",
 * ⁠   "Fizz",
 * ⁠   "13",
 * ⁠   "14",
 * ⁠   "FizzBuzz"
 * ]
 * 
 * 
 */
public class fizzBuzzSolution {
    public List<String> fizzBuzz2(int n) {
        List<String> result = new ArrayList<String>();
        for (int i = 1; i <= n; i++) {
            if (0 == i % 3 && 0 == i % 5) {
                result.add("FizzBuzz");
            } else if (0 == i % 5) {
                result.add("Buzz");
            } else if (0 == i % 3) {
                result.add("Fizz");
            } else {
                String num = Integer.toString(i);
                if (num.indexOf('3') != -1 && num.indexOf('5') != -1) {
                    result.add("FizzBuzz");
                } else if (num.indexOf('3') != -1) {
                    result.add("Fizz");
                } else if (num.indexOf('5') != -1) {
                    result.add("Buzz");
                } else {
                    result.add(num);
                }
            }
        }
        return result;
    }
}

