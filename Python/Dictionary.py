d={1:['a,b'],2:['b'],3:['c']}
'''print(d)
print(d[1])
f=d.copy()
f[2][0]='!!!!!'
print(d)
print(f)
print("Get:",d.get(1))
print(d.get(999))
print(d.get(999,'missing'))
print(d)
print(d.setdefault(1))
print(d.setdefault(0,'d'))
print(d)
d.clear()
print(d)
l=['Apple','Orange']
print(d.fromkeys(l,'fruit'))
print(d.items())
for i,j in d.items():
    print(i, j)
d.update(1,'book')
print(d)'''
print(d | {4:'pooj'})
d|= {5:'mam' }
print(d)

