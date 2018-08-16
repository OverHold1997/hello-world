import pandas as pd
import numpy as np

df=pd.DataFrame(np.random.randn(10,4),columns=list('ABCD'))
#数据保存，相对路径
df.to_csv('data.csv')
#数据读取
print(pd.read_csv('data.csv',index_col=0))