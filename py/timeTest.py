import time
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

f = open('E:\Chrome\chrome\美赛C题论文\新建文件夹\交通数据下\s20140830_train.txt')
f1 = open('E:\Chrome\chrome\美赛C题论文\新建文件夹\交通数据下\提取区间.txt','a')
t1 = time.time()
for chuck in readInChunks(f):
    # chuck = chuck.strip('\n')
    a = chuck.split(',')
    temp = " ".join(a)
    if(float(a[1]) <= 30.664393 and float(a[1])>=30.662695 and float(a[2])<=104.079552 and float(a[2])>=104.065536):
        f1.write(temp)
    # a=split(chuck)
    # print(a)
    print(chuck)
    # print(type(chuck))
    #do_something(chunk)
t2 = time.time()
print(t2-t1)
f.close()
f1.close()