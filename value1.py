import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

ts=pd.Series(np.random.randn(1000),index=pd.date_range('20170220',periods=1000))
ts=ts.cumsum()
print(ts)
ts.plot()
plt.show()