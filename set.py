#添加单个元素
a={1,2,3,4}
a.add(5)
print("添加一个元素：",a)
#添加多个元素，而且参数可以是列表、元组、字典等
a.update({5,6})
print("添加多个元素：",a)
#移除元素
a1={1,2,3,4}
a1.remove(3)#不存在会发生错误
print("移除元素：",a1)
a1.discard(3)#不存在不会发生错误
#随机移除元素
a1.pop()
print("随机移除元素：",a1)
#计算集合元素的个数
a2={1,2,3,4,6}
x=len(a2)
print("集合元素的个数：",x)
#清空集合
a2.clear()
print(a2)
#判断元素是否在集合中存在


