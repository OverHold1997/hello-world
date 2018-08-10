import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
df=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(df)
#重新定义索引，并添加E列
df1=df.reindex(index=dates[0:4],columns=list(df.columns)+['E'])
print(df1)
#将E列中的2，3行赋值为2
df1=df.reindex(index=dates[0:4],columns=list(df.columns)+['E'])
print(df1)

