import numpy as np
import pandas as pd

dates=pd.date_range('20170220',periods=6)
data=pd.DataFrame(np.random.randn(6,4),index=dates,columns=list('ABCD'))

print(data)
#将第一行第一列元素赋值为100
data.iat[0,0]=100
print(data)
#将A元素用range(6)赋值
data.A=range(6)
print(data)
#将B列元素赋值为200
data.B=200
print(data)
#将3，4列元素赋值为1000
data.iloc[:,2:5] = 1000
print(data)