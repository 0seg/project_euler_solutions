# Problem 001 — Multiples of 3 or 5

## Problem

Find the sum of all natural numbers below 1000 that are multiples of 3 or 5.

## Approach

Iterate from 1 to 999 and check whether each number is divisible by 3 or 5 using the modulo operator (`%`).

If either condition is satisfied, add the number to the accumulator.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Result

**233168**

## Language

C++20