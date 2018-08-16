import pandas as pd
import numpy as np
tuples=list(zip(*[['bar','bar','baz','baz',
                   'foo','foo','qux','qux'],
                  ['one','two','one','two',
                   'one','two','one','two']]))
index=pd.MultiIndex.from_tuples(tuples,names=['first','second'])
df=pd.DataFrame(np.random.randn(8,2),index=index,columns=['A','B'])
print(df)
print()
stacked=df.stack()
#将行索引转换为列索引
print(stacked.unstack())
#转换两次
print(stacked.unstack().unstack())