import pandas as pd
import numpy as np
df = pd.DataFrame({"id":[1,2,3,4,5,6],"raw_grade":['a','b','b','a','a','e']})
print(df)
#添加类别数据，以raw_grade的值为类别基础
df["grade"]=df["raw_grade"].astype("category")
print(df)
#打印类别
print(df["grade"].cat.categories)
#更改类别
df["grade"].cat.categories=["very good","good","very bad"]
print(df)
#根据grade的值排序
print(df.sort_values(by='grade',ascending=True))
#根据grade排序显示数量
print(df.groupby("grade").size())