import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
df=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(df)
#定义一个函数
def _sum(x):
    print(type(x))
    return x.sum()
#apply函数可以接受一个函数座位参数
print(df.apply(_sum))
s=pd.Series(np.random.randint(10,20,size=15))
print(s)
#统计序列中每个元素出现的次数
print(s.value_counts())
#返回出现最多的元素
print(s.mode())
