#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    total=0
    i=0
    while i<(len(bill)):
        if(i!=k):
            total=total+int( bill[i])
            i+=1
        else:
            i+=1
   
    if((total//2)-b==0):
        return('Bon Appetit')
    else:
        return abs((total//2)-b)


if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    result=bonAppetit(bill, k, b)
    print(result)
