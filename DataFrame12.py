import numpy as np
import pandas as pd

df=pd.DataFrame(np.random.randn(10,4),columns=list('ABCD'))
print(df)
left=pd.DataFrame({'key':['foo','foo'],'lval':[1,2]})
right=pd.DataFrame({'key':['foo','foo'],'lval':[4,5]})
print(left)
print(right)
#通过key来合并数据
print(pd.merge(left,right,on='key'))
s=pd.Series(np.random.randint(1,5,size=4),index=list('ABCD'))
print(s)
#通过序列添加一行
print(df.append(s,ignore_index=True))