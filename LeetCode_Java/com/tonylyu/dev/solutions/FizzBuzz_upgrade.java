package com.tonylyu.dev.solutions;
import java.util.*;

public class FizzBuzz_upgrade {
    public List<String> fizzBuzz(int n) {
        List<String> result = new ArrayList<String>();
        for (int i = 1; i <= n; i++) {
            if (contains3(i) && contains5(i)) {
                result.add("FizzBuzz");
            } else if (contains5(i)) {
                result.add("Buzz");
            } else if (contains3(i)) {
                result.add("Fizz");
            } else {
                result.add(Integer.toString(i));
            }
        }
        return result;
    }

    boolean contains3(int num) {
        return 0 == num % 3 || -1 != Integer.toString(num).indexOf('3');
    }
    
    boolean contains5(int num) {
        return 0 == num % 5 || -1 != Integer.toString(num).indexOf('5');
    }
}

