import random
f=open('aadharnumber.txt','w')
for i in range(1000):
    a=random.randint(1,9)
    f.write(str(a))
    for i in range(11):
        a=random.randint(0,9)
        f.write(str(a))
    f.write('\n')
