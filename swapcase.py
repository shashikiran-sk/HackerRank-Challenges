s=rinput()
l,strs=[],None
for i in range(len(s)):
    if s[i].islower():
        l.append(s[i].upper())
    elif  s[i].isupper():
        l.append(s[i].lower())
    else:
        l.append(s[i])
strs=str(''.join(l))
print(strs)
