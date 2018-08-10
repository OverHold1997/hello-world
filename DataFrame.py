#通过二维数组创建数据框
import numpy as np,pandas as pd
arr2 =np.array(np.arange(12)).reshape(4,3)

df1=pd.DataFrame(arr2)
df1
type(df1)
print(df1)