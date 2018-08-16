import pandas as pd
import numpy as np

rng = pd.date_range('20170220', periods=600, freq='s')
ts = pd.Series(np.random.randint(0, 500, len(rng)), index=rng)
# 重采样，以2分钟为单位进行加和采样
print(ts.resample('2Min', how='sum'))
# 列出2011年1季度到2017年1季度
rng1 = pd.period_range('2011Q1', '2017Q1', freq='Q')
print(rng1)
# 转换成时间戳形式
print(rng1.to_timestamp())
# 时间加减法
print(pd.Timestamp('20170220') - pd.Timestamp('20170112'))
print(pd.Timestamp('20170220') + pd.Timedelta(days=12))