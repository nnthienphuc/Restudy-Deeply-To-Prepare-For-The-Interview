#include<iostream>
#include<math.h>

// First solution
// Rumtime 43ms
// Memory 7.02MB
class Solution1 {
public:
    int sumOfContiguousElements (int start, int end) {
        int i = start;
        int sum = 0;
        for (; i <= end; ++i) {
            sum += i;
        }
        return sum;
    }

    int pivotInteger(int n) {
        if (n == 1)
            return 1;
        int i = 1;
        int j;
        for (; i <= n; ++i) {
            if (sumOfContiguousElements(1, i) == sumOfContiguousElements(i, n))
                return i;
        }
        return -1;
    }
};

// Second solution
// Rumtime 4ms
// Memory 7.27MB
class Solution2 {
public:
    int pivotInteger(int n) {
        if (n == 1)
            return 1;
        double i = 1;
        for (; i <= n; ++i) {
            double leftSum = ((i + 1) * i) / 2;
            if (leftSum == ((((n + 1) * (double)n) / 2) - leftSum + i))
                return (int)i;
        }
        return -1;
    }
};

// Third solution
// Rumtime 0ms
// Memory 7.25MB
class Solution3 {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        if (fmod(x, 1.0) != 0)
            return -1;
        return (int)x;
    }
};