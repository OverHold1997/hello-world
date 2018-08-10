import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
data=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(data)
print()
#输出DataFrame头部数据，默认为前5行
print(data.head())
#输出DataFrame的第一行数据
print(data.head(1))
#输出DataFrame尾部数据，默认为后5行
print(data.tail())
#输出DataFrame最后最后一行数据
print(data.tail(1))
#输出行索引
print(data.index)
#输出列索引
print(data.columns)
#输出DataFrame数据值
print(data.values)
#输出DataFrame
print(data.describe())