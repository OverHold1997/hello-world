import numpy as np,pandas as pd
#一维数组的转置
arr=np.arange(6)
print(arr)
print(arr.T)#一维仍旧还是一维
#二位数组转置
arr=np.arange(6).reshape((2,3))
print(arr)
print(arr.T)
#三维数组的转置
arr=np.arange(24).reshape((2,3,4))
print(arr)
print(arr.T)
print(arr.swapaxes(1, 0))
