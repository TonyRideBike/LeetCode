package com.tonylyu.dev.solutions;
import java.util.*;

public class FizzBuzz {
    public List<String> fizzBuzz(int n) {
        List<String> result = new ArrayList<String>();
        for (int i = 1; i <= n; i++) {
            if (0 == i % 3 && 0 == i % 5) {
                result.add("FizzBuzz");
            } else if (0 == i % 5) {
                result.add("Buzz");
            } else if (0 == i % 3) {
                result.add("Fizz");
            } else {
                result.add(Integer.toString(i));
            }
        }
        return result;
    }
}

