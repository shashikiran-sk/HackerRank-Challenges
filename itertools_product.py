from itertools import product
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
l=(list(product(a,b)))
for x in range(len(l)):
    print(l[x],end=' ')


'''itertools.product()

It computes the cartesian product of input iterables.
It is equivalent to nested for-loops.
For example, product(A, B) returns the same as ((x,y) for x in A for y in B). '''