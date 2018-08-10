import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
data=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(data)
print()
#转置
print(data.T)
#输出维度信息
print(data.shape)
#转置后的维度信息
print(data.T.shape)
#将列索引排序
print(data.sort_index(axis=1))
#将列索引排序，降序排序
print(data.sort_index(axis=1,ascending=False))
#将行索引进行排序，降序排序
print(data.sort_index(axis=0,ascending=False))
#按照A列的值进行升序排列
print(data.sort_values(by='A'))