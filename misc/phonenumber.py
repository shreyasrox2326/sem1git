import random
f=open('phonenumber.txt','w')
for i in range(1000):
    a=random.randint(1000,99999999)
    b=random.randint(70,99)
    c=b*100000000+a
    f.write(str(c))
    f.write('\n')
