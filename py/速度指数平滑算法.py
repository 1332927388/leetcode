
import numpy as np
from matplotlib import pyplot as plt

#平滑系数，0<β<1,这里取0.2
beta = 0.2

#指数平滑公式
def zhishupinghua(beta, T):
    ST = np.zeros(s.shape)
    ST[0] = T[0]
    for i in range(1, len(ST)):
        ST[i] = beta*T[i] + (1-beta)*ST[i-1]
    return ST

import numpy as np
import matplotlib.pyplot as plt
plt.style.use('seaborn-white')

x1 = np.random.normal(0, 0.8, 1000)
x2 = np.random.normal(-2, 1, 1000)
x3 = np.random.normal(3, 2, 1000)
kwargs = dict(histtype='stepfilled', alpha=0.3, normed=True, bins=40)
plt.hist(x1)
# plt.hist(x1, kwargs)
# plt.hist(x2, *kwargs)
# plt.hist(x3, **kwargs)
# #最基本的频次直方图命令
# plt.hist(data)
plt.show()