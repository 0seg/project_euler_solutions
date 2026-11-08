# Problem 003 — Largest Prime Factor

## Problem

Find the largest prime factor of the number:

$$
N = 600851475143
$$

## Mathematical Background

### Fundamental Theorem of Arithmetic

The Fundamental Theorem of Arithmetic states that every integer greater than 1 can be expressed uniquely as a product of prime numbers, apart from the order of the factors.

For example:

$$
60 = 2^2 \times 3 \times 5
$$

In general, every integer \(N > 1\) can be represented as:

$$
N = p_1^{a_1} \times p_2^{a_2} \times \cdots \times p_k^{a_k}
$$

Where each \(p_i\) is a prime number.

Therefore, finding the largest prime factor means decomposing the original number into its prime factors and identifying the largest one.

## Approach

The solution uses **trial division** to find prime factors.

1. Start checking potential divisors from 2.
2. If a divisor is found, divide the number by it repeatedly until it is no longer divisible.
3. Keep track of the largest prime factor found.
4. Continue checking divisors up to the square root of the remaining number.
5. If the remaining number is greater than 1, it must be prime and is the largest prime factor.

### Why only check up to the square root?

If a number \(N\) has two factors \(a\) and \(b\), then:

$$
N = a \times b
$$

At least one of these factors must be less than or equal to the square root of \(N\):

$$
\min(a,b) \leq \sqrt{N}
$$

This allows us to reduce the search space significantly.

## Complexity

- **Time:** \(O(\sqrt{N})\) — upper bound for trial division.
- **Space:** \(O(1)\) — constant extra space.

## Result

**6857**

## Language

C++20