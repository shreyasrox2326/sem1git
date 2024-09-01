inputstr='''Thiem:Medvedev:2-6,6-7,7-6,6-3,6-1
Barty:Osaka:6-4,6-4
Medvedev:Thiem:6-3,6-3
Osaka:Barty:1-6,7-5,6-2
Thiem:Medvedev:6-0,7-6,6-3
Osaka:Barty:2-6,6-2,6-0
Medvedev:Thiem:6-3,4-6,6-3,6-4
Barty:Osaka:6-1,3-6,7-5
Thiem:Medvedev:7-6,4-6,7-6,2-6,6-2
Osaka:Barty:6-4,1-6,6-3
Medvedev:Thiem:7-5,7-5
Osaka:Barty:3-6,6-3,6-3'''
newinput=''
for i in range(len(inputstr)):
    if inputstr[i]==':':
        newinput+=','
    else:
        newinput+=inputstr[i]
inputstr=newinput
linesplit=inputstr.split('\n')
for i in range(len(linesplit)):
    linesplit[i]=linesplit[i].split(',')
    for j in range(len(linesplit[i])):
        if j>1:
            linesplit[i][j]=linesplit[i][j].split('-')
            linesplit[i][j][0],linesplit[i][j][1]=int(linesplit[i][j][0]),int(linesplit[i][j][1])
finaldata=linesplit
pointdict={'Thiem':[0,0,0,0,0,0],'Medvedev':[0,0,0,0,0,0],'Osaka':[0,0,0,0,0,0],'Barty':[0,0,0,0,0,0]}
def playerdata(x):
    global pointdict
    for i in range(len(finaldata)):
        if finaldata[i][0]==x:
            flag=0
        elif finaldata[i][1]==x:
            flag=1
        else: flag=2
        if flag!=2:
            setsw=0
            setsl=0
            for j in range(2,len(finaldata[i])):
                pointdict[x][3]+=finaldata[i][j][flag]
                pointdict[x][5]+=finaldata[i][j][int(not flag)]
                if finaldata[i][j][flag]>finaldata[i][j][not flag]:
                    setsw+=1
                else: setsl+=1
            pointdict[x][2]+=setsw
            pointdict[x][4]+=setsl
            if len(finaldata[i])>5 and setsw>setsl:
                pointdict[x][0]+=1
            if len(finaldata[i])<=5 and setsw>setsl:
                pointdict[x][1]+=1
playerdata('Osaka')
playerdata('Barty')
playerdata('Medvedev')
playerdata('Thiem')
def printdata(x):
    print(x,end=' ')
    for i in pointdict[x]:
        print(i,end=' ')
    print('')
printdata('Thiem')
printdata('Medvedev')
printdata('Osaka')
printdata('Barty')