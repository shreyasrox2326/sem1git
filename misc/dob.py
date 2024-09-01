import random
f=open('dob.txt','w')
for i in range(1000):
    year=random.randint(1970,2010)
    month=random.randint(1,12)
    date=random.randint(1,28)
    if len(str(date))==1:
        dstr='0'+str(date)
    else:
        dstr=str(date)
    
    if len(str(month))==1:
        mstr='0'+str(month)
    else:
        mstr=str(month)

    f.write(dstr+"."+mstr+'.'+str(year))
    f.write('\n')