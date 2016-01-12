t=int(raw_input())
for i in range(t):
	l=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
	s=str(raw_input())
	for j in range(len(s)):
		if s[j] in l:
			del(l[l.index(s[j])])
	if len(l)==0:
		print "YES"
	else:
		print "NO"
'''A string is said to be complete if it contains all the characters from a to z. Given a string, check if it complete or not.

Input
First line of the input contains the number of strings N. It is followed by N lines each contains a single string.

Output
For each test case print "YES" if the string is complete, else print "NO"

Constraints
1 <= N <= 10
The length of the string is at max 100 and the string contains only the characters a to z
Sample Input
(Plaintext Link)

3
wyyga
qwertyuioplkjhgfdsazxcvbnm
ejuxggfsts

Sample Output
(Plaintext Link)

NO
YES
NO

'''