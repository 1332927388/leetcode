from matplotlib import pyplot as plt 
import numpy as np 
import csv

#用来正常显示中文标签 
plt.rcParams['font.sans-serif']=['SimHei'] 
#用来正常显示负号 
plt.rcParams['axes.unicode_minus']=False


x=[]
y=[]
with open('E:\Chrome\chrome\美赛C题论文\新建文件夹\交通数据下\提取10辆.csv') as csvfile:
    plots = csv.reader(csvfile,delimiter=',')
    for row in plots:
        y.append(str(row[6]))
        x.append(str(row[5]))
# plt.plot(x,y,label='模拟数据')
plt.scatter(x,y)
plt.show()