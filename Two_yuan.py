import numpy as np
A=eval(input('input:'))
type(A)
listA=list(A)
print(listA)
n=len(listA)

#R1与A的关系
print("输入R1的偏序对：")
N=int(input())
M=int(input())
R1=[[0]*N]*M
for i in range(M):
    R1[i]=input().split(" ")
    for j in range(N):
        R1[i][j]=int(R1[i][j])
print("R1的偏序对为：",R1)

flag=0
print("由R1偏序对可得到关系矩阵M1：")
M1=[[0]*n]*n
for i in range(n):
    M1[i]=input().split(" ")
    for j in range(n):
        M1[i][j]=int(M1[i][j])
print(np.matrix(M1)) #矩阵输出
for i in range(n):
    if(M1[i][i]==1):
        flag=flag+1
    else:
        if(M1[i][i]==0):
            flag=flag+0
if(flag==n):
    print("R1是自反的！")
else:
    if(flag==0):
        print("R1是反自反的！")
    else:
        print("R1既不是自反的又不是反自反的")
flag2=0
for i in range(n):
    for j in range(n):
       if(M1[i][j]==M1[j][i] and i!=j):
           flag2=flag2+1
       else:
           if(M1[i][j]!=M1[j][i] and i!=j):
               flag2=flag2-1
if(flag2==n*n-n):
    print("R1为对称关系！")
else:
    if(flag2==-(n*n-n)):
        print("R1为反对称关系！")
    else:
        print("R1既不是对称又不是反对称！")
flag4=0
for i in range(n):
    for j in range(n):
        if(M1[i][j]==1):
            for k in range(n):
                if(M1[j][k]==1 and M1[i][k]!=1):
                    flag4=1
                    break
if(flag4==1):
    print("R1不具备可传递性！")
else:
    print("R1具备可传递性！")
if(flag==n-1 and flag2==n*n-n and flag4==1):
    print("R1在二元关系上是等价的！")
else:
    print("R1在二元关系上不是等价的！")

#R2与A的关系
print("输入R2的偏序对：")
P=int(input())
Q=int(input())
R2=[[0]*P]*Q
for i in range(Q):
    R2[i]=input().split(" ")
    for j in range(P):
        R2[i][j]=int(R2[i][j])
print("R2的偏序对为：",R2)
flag1=0
print("由R2偏序对可得到关系矩阵M2：")
M2=[[0]*n]*n
for i in range(n):
    M2[i]=input().split(" ")
    for j in range(n):
        M2[i][j]=int(M2[i][j])
print(np.matrix(M2)) #矩阵输出
for i in range(n-1):
    if(M2[i][i]==1):
        flag1=flag1+1
    else:
        if(M2[i][i]==0):
            flag1=flag1+0
if(flag1==n-1):
    print("R2是自反的！")
else:
    if(flag1==0):
        print("R2是反自反的！")
    else:
        print("R2既不是自反的又不是反自反的")
flag3=0
for i in range(n):
    for j in range(n):
       if(M2[i][j]==M2[j][i] and i!=j):
           flag3=flag3+1
       else:
           if(M2[i][j]!=M2[j][i] and i!=j):
               flag3=flag3-1
if(flag3==n*n-n):
    print("R1为对称关系！")
else:
    if(flag3==-(n*n-n)):
        print("R2为反对称关系！")
    else:
        print("R2既不是对称又不是反对称！")
flag5=0
for i in range(n):
    for j in range(n):
        if(M2[i][j]==1):
            for k in range(n):
                if(M2[j][k]==1 and M2[i][k]!=1):
                    flag5=1
                    break
if(flag5==1):
    print("R2不具备可传递性！")
else:
    if(flag5==0):
        print("R2具备可传递性！")
if(flag1==n-1 and flag3==n*n-n and flag5==0):
    print("R2在二元关系上是等价的！")
else:
    print("R2在二元关系上不是等价的！")


