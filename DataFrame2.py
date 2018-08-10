import numpy as np
import pandas as pd

#设计一个字典
d_data={'A':1,'B':pd.Timestamp('20170220'),'C':range(4),'D':np.arange(4)}
print(d_data)
#使用字典生成一个DataFrame
df_data=pd.DataFrame(d_data)
print(df_data)
#DataFrame中每一列的类型
print(df_data.dtypes)
#打印A列
print(df_data.A)
#打印B列
print(df_data.B)
#B列的类型
print(type(df_data.B))