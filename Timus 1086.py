#!/usr/bin/env python


from math import log, ceil


def find_primes(limit):
    nums = [True] * (limit + 1)
    nums[0] = nums[1] = False

    for (i, is_prime) in enumerate(nums):
        if is_prime:
            yield i
            for n in range(i * i, limit + 1, i):
                nums[n] = False


def upper_bound_for_p_n(n):
    if n < 6:
        return 100
    return ceil(n * (log(n) + log(log(n))))


primes = list(find_primes(upper_bound_for_p_n(15000)))
x = int(input())

while x > 0:
    y = int(input())
    print(primes[y - 1])
    x -= 1

