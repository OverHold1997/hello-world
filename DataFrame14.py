import pandas as pd
import numpy as np
#zip函数可以打包成一个个tuple
tuples=list(zip(*[['bar','bar','baz','baz',
                   'foo','foo','qux','qux'],
                  ['one','two','one','two',
                   'one','two','one','two']]))
print(tuples)
#生成一个多层索引
index=pd.MultiIndex.from_tuples(tuples,names=['first','second'])
print(index)
print()
df=pd.DataFrame(np.random.randn(8,2),index=index,columns=['A','B'])
print(df)
print()
#将列索引变成行索引
print(df.stack())