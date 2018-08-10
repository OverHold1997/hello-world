import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
data=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(data)
#输出A列中大于0的行
print(data[data.A>0])
#输出大于0的数据，小雨等于0的用NaN补位
print(data[data>0])
#拷贝data
data2=data.copy()
print(data2)
tag=['a']*2+['b']*2+['c']*2
#再data2中添加TAG列用tag赋值
data2['TAG']=tag
print(data2)
print (data2[data2.TAG.isin(['a','c'])])