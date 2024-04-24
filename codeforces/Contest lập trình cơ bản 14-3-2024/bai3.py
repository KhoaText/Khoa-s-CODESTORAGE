a = input()
while a[0].isdigit() or a[0]=="_":
    a=a[1:]
a = a[0].lower()+a[1:]
for i in a:
    if i == i.upper() and not i.isdigit():
        print("_"+i.lower(),end="")
    elif i!=" ": print(i,end="")