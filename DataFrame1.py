import numpy as np
import pandas as pd

# 以20170220为基点向后生产时间点
dates = pd.date_range('20170220', periods=6)
# DataFrame生成函数，行索引为时间点，列索引为ABCD
data = pd.DataFrame(np.random.randn(6, 4), index=dates, columns=list('ABCD'))
print(data)
print()
print(data.shape)
print()
print(data.values)
