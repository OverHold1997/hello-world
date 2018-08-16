import pandas as pd
import numpy as np

#创建一个以20170220为基准的秒为单位的向前推进600个时间序列
rng=pd.date_range('20170220',periods=600,freq='s')
print(rng)
#以时间序列为索引的序列
print (pd.Series(np.random.randint(0, 500, len(rng)), index=rng))