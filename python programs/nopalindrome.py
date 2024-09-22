a=input("enter number")
s1=str(a)
print(s1)
revstr=s1[::-1]
print(revstr)


if revstr== a:
    print("string is palindrome")
else:
    print("string is not palindrome")