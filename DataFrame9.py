import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
df=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))
print(df)
df1=df.reindex(index=dates[0:4],columns=list(df.columns)+['E'])
print(df1)
#针对行求平均值
print(df1.mean(axis=1))
#生成序列并向右平移两位
s=pd.Series([1,3,5,np.nan,6,8],index=dates).shift(2)
print(s)
#df与s进行做减法运算
print(df.sub(s,axis='index'))
#每列做累加运算
print(df.apply(np.cumsum))
#每列的最大值减去最小值
print (df.apply(lambda x: x.max() - x.min()))