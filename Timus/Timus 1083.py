#!/usr/bin/env python

x = input().split()
y = len(x[1])
total = 1
k = int(x[0])
while k > 0:
    total = total * k
    k = k - y

print (total)
