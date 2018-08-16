import numpy as np
import pandas as pd

df=pd.DataFrame(np.random.randn(10,4),columns=list('ABCD'))
print(df)
df1=pd.concat([df.iloc[:3],df.iloc[3:7],df.iloc[7:]])
#判断两个DataFrame中的元素是否相等
print(df==df1)