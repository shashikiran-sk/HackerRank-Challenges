#!/bin/python3

import sys

def feeOrUpfront(n, k, x, d, p):
    charge=0
    for i in range(n):
        if k>p[i]*(x/100):
            charge=charge+k
        else:
            charge=charge+p[i]*(x/100)
    if charge<=d:
        return "fee"
    else:
        return "upfront"

if __name__ == "__main__":
    q = int(input().strip())
    for a0 in range(q):
        n, k, x, d = input().strip().split(' ')
        n, k, x, d = [int(n), int(k), int(x), int(d)]
        p = list(map(int, input().strip().split(' ')))
        result = feeOrUpfront(n, k, x, d, p)
        print(result)



'''
You are going to receive "n" payments in the upcoming month. The payments are numbered from 0 to n-1 and p(i) denotes the amount of money in dollars that will be paid in connection with the -th payment. Before receiving the payments, you have two banking options to consider:

You can receive all the payments on your current bank account remembering that the bank charges you for each payment "i" max(k,x% of p(i)), where "k" and "x" are given.
You can pay the bank "d" dollars upfront to open a new special account for which the bank doesn't charge you for any of the upcoming transactions.
Your task is to decide which of the above two options is more profitable to you. If both ways are equally profitable, then you prefer to be charged for each transaction.

Input Format

In the first line, there is a single integer "q" denoting the number of scenarios to handle. After that, descriptions of all these scenarios follow. In the first line of a single scenario, there are 4 space-separated integers n,k,x,d . In the second line, there are p0,p1,....pn-1 space separated integers .

Constraints

Output Format

Print exactly  lines. In the -th of them, print the answer to the -th scenario. More specifically, print feeif it's more profitable to use the current account and let the bank charge for each transaction, or print upfront if it's better to pay the bank up front for opening the new special account.

Sample Input 0

3
3 20 10 60
100 200 300
3 20 15 120
200 250 300
1 1 10 100
1000
Sample Output 0

upfront
fee
fee
'''
