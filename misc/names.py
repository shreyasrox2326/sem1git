import random
ff=open('firstnames.txt','r')
lf=open('lastnames.txt','r')
namefile=open('names.txt','w')
fn=ff.readlines()
ln=lf.readlines()
for i in range(len(fn)):
    fn[i]=fn[i].strip('\n')
for i in range(len(ln)):
    ln[i]=ln[i].strip('\n')
for i in fn:
    for j in ln:
        name=i+' '+j
       # print(name)
        namefile.write(name)
        namefile.write('\n')