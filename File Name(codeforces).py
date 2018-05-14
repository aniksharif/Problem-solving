#!/usr/bin/env python

y = int(input())
x = str(input())

output = 0

for j in range(len(x) - 2):
    if x[j] == 'x' and x[j + 1] == 'x' and x[j + 2] == 'x':
        output += 1

print(output)
