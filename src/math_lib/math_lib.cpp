#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;        
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }

    int GCD(int a, int b)
    {
		if (b == 0) return a;
		return GCD(b, a % b);
	}
}

int factorial(int n) {
    if (n < 0) return -1; 
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int findThirdAngle(int angle1, int angle2)
{
    if (angle1 <= 0 || angle2 <= 0 || angle1 + angle2 >= 180)
        throw std::invalid_argument("Invalid angles.");
    return 180 - (angle1 + angle2);
}

double median(std::vector<int> numbers) {
    if (numbers.empty()) return 0.0; 

    std::sort(numbers.begin(), numbers.end()); 
    size_t n = numbers.size();

    if (n % 2 == 0) {
        return (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    } else {
        return numbers[n/2];
    }
}

