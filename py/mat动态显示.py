
from datetime import datetime
import matplotlib.dates as mdates
import matplotlib.pyplot as plt
import random   
import numpy as np 

# x=['06:00:00','06:30:00','07:00:00','07:30:00','08:00:00','08:30:00','09:00:00','09:30:00','10:00:00','10:30:00','11:00:00','11:30:00','12:00:00','12:30:00','13:00:00','13:30:00','14:00:00','14:30:00','15:00:00','15:30:00','16:00:00','16:30:00','17:00:00','17:30:00','18:00:00']
# num = range(0,100)
# # y = random.randint(0,21)
# # y = random.sample(num,25)
# y=[4,5,7,6,8,6,4,5,4,6,7,6,9,10,8,9,7,8,6,5,7,6,7,6,7]
# fig = plt.figure()
# ax = fig.add_subplot(111)
# ax.axes.set_xticklabels(x,rotation=90)
# # ax.xaxis.set_major_formatter(mdates.DateFormatter('%H:%M:%S'))
# plt.plot(x,y)

# #设置坐标轴刻度
# # my_x_ticks = np.arange(, 5, 0.5)
# my_y_ticks = np.arange(0,100,1)
# # plt.xticks(my_x_ticks)
# plt.yticks(my_y_ticks)

# plt.show()










def readInChunks(fileObj, chunkSize=4096):
    """
    Lazy function to read a file piece by piece.
    Default chunk size: 4kB.
    """
    while 1:
        data = fileObj.readline()
        if not data:
            break
        yield data
f = open('D:\WordEecePdfl\数据814.txt')
fig = plt.figure(0)
plt.style.use('seaborn-whitegrid')
# fig = plt.grid(False)
# fig = plt.grid()
# plt.ion()
plt.xlabel('time')
plt.ylabel('s')

# plt.xticks([])
plt.yticks([])
plt.ylim(0,100)
plt.xlim(00:00:00,24:00:00)
plt.ylim(00:00:00,24:00:00)
ax1.xaxis.set_major_formatter(mdates.DateFormatter('%H:%M:%S'))
ax1.yaxis.set_major_formatter(mdates.DateFormatter('%H:%M:%S'))

plt.gca().xaxis.set_major_formatter(mdates.DateFormatter('%H:%M:%S'))
plt.gca().yaxis.set_major_formatter(mdates.DateFormatter('%H:%M:%S'))

for i in readInChunks(f):
    a = i.split('\t')
    # print(a)
    # print(i)
#     a = i.split(' ')
    m = a[8]
    n = a[7]
    # plt.scatter(m,n)
    plt.draw()
    plt.pause(0.001)
f.close()





