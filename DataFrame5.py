import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
data=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))

print(data)
#输出A列
print(data.A)
#输出A列
print(data['A'])
#输出3，4行
print(data[2:4])
#输出3，4行
print(data['20170222':'20170223'])
#输出3，4行
print(data.loc['20170222':'20170223'])
#输出3，4行
print(data.iloc[2:4])
#输出B，C两列
print(data.loc[:,['B','C']])