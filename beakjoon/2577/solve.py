res=1
find="0123456789"
data=input()
res*=data
data=input()
res*=data
data=input()
res*=data
res=str(res)
for i in find:
    print(res.count(i))



