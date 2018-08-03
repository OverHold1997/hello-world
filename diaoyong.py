def call(fn,arg):
    """在ARG上调用FN """
    return  fn(arg)
def squared_call(fn,arg):
    """调用ARN上调用FN的结果 """
    print(
        call(fn,1),
        squared_call(fn,1),
        sep='\n',
)
