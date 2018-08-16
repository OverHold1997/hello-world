import pandas as pd
import numpy as np
df=pd.DataFrame({'A':['one','one','two','three']*3,
                 'B':['A','B','C']*4,
                 'C':['foo','foo','foo','bar','bar','bar']*2,
                 'D':np.random.randn(12),
                 'E':np.random.randn(12)})
print(df)
#根据A，B索引为行，C的索引为列处理D的值
print(pd.pivot_table(df,values='D',index=['A','B'],columns=['C']))
#感觉A列等于one为索引，根据C列组合的平均值
print(df[df.A=='one'].groupby('C').mean())