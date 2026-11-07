# Problem 002 — Even Fibonacci Numbers

## Problem

Find the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed 4,000,000.

## Approach

Use a recurrence relation to generate only the even-valued Fibonacci numbers.

Instead of generating the entire Fibonacci sequence, use the mathematical property:

\[
E_n = 4E_{n-1} + E_{n-2}
\]

Starting with the first two even terms (2 and 8), calculate each subsequent even term and accumulate the sum until the limit is exceeded.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Result

**4613732**

## Language

C++20