import csv
import time
import ipfsapi
import os
import subprocess
dbfile=open("error404.csv",'r')
data=csv.reader(dbfile)
x=(input("Enter the aadhar number: "))
for i in data:
    if(i[3]==x):
        correcti=i
htmlfile=open('B:\profile.html','w')
htmlstr='''<html>
<body>
<font color=#caf0f8 size=6 FACE="Courier New">
<center>
<p" HEIGHT=90; style="background-color:#ff6347;" ><b><big><big>Error 404</big></big></b>
</p>
</center>
</FONT>
<style>
p.ex1 {
   margin-right: 60px; margin-left: 60px;
   margin-top :100px;
  line-height: 1;
}
</style>
<font face="Courier New"  size=6 >
<p class="ex1" style="border:19px; border-style:dotted; border-color:#88EE00;border-radius: 25px;padding: 40px;text-align: center;">
Name: '''+i[0]+'''<br>
Aadhar Number: '''+i[3]+'''<br>
Date of Birth: '''+i[2]+'''<br>
Phone number: '''+i[1]+'''
</font>
</p>
<center>
<img src="https://cdn-icons-png.flaticon.com/512/190/190595.png" width="200" height="200">
</center>
</body>
</html>'''
htmlfile.write(htmlstr)
htmlfile.close
dbfile.close
bstr=R'''wkhtmltopdf B:\profile.html B:\profile.pdf'''
subprocess.Popen(bstr, shell=True)
client = ipfsapi.Client('localhost', 5001)
file_path = 'B:\profile.pdf'
file_hash = client.add(file_path)
hashfile=open("hfile.txt",'a+')
hashfile.write(str(i[3])+','+str(file_hash))