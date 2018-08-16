import numpy as np
import pandas as pd
df=pd.DataFrame({'A':['foo','bar','foo','bar',
                     'foo','bar','foo','bar'],
                 'B':['one','one','tow','three',
                      'two','two','one','three'],
                 'C':np.random.randn(8),
                 'D':np.random.randn(8)})
print(df)
print()
#根据A列的索引求和
print(df.groupby('A').sum())
print()
#先根据A列的索引，再根据B列的索引求和
print(df.groupby(['A','B']).sum())
print()
#先根据B列的索引，再根据A列的索引求和
print(df.groupby(['B','A']).sum())