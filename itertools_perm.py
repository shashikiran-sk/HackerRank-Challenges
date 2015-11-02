from itertools import permutations
s,l,k=[],[],[]
for x in input().split():
    l.append(x)
s=list(permutations(l[0],int(l[1])))
for i in range(len(s)):
    k.append(''.join(map(str,s[i])))
k.sort()
for i in range(len(k)):
    print(k[i],end='\n')


'''itertools.permutations(iterable[, r])

Returns successive r length permutations of elements in an iterable.

If r is not specified or is None, then r defaults to the length of the iterable
and all possible full-length permutations are generated.

Permutations are emitted in lexicographic sort order.
So, if the input iterable is sorted,
the permutation tuples will be produced in sorted order.

>>> from itertools import permutations
>>> print permutations(['1','2','3'])
<itertools.permutations object at 0x02A45210>
>>> 
>>> print list(permutations(['1','2','3']))
[('1', '2', '3'), ('1', '3', '2'), ('2', '1', '3'), ('2', '3', '1'), ('3', '1', '2'), ('3', '2', '1')]
>>> 
>>> print list(permutations(['1','2','3'],2))
[('1', '2'), ('1', '3'), ('2', '1'), ('2', '3'), ('3', '1'), ('3', '2')]
>>>
>>> print list(permutations('abc',3))
[('a', 'b', 'c'), ('a', 'c', 'b'), ('b', 'a', 'c'), ('b', 'c', 'a'), ('c', 'a', 'b'), ('c', 'b', 'a')]


Sample Input

HACK 2

Sample Output

AC
AH
AK
CA
CH
CK
HA
HC
HK
KA
KC
KH

'''
