import sys
N = int(sys.stdin.readline())
for i in range(1, N+1, 1):
    print("*"*i+" "*((N*2)-(2*i)) + "*"*i)
for i in range(N-1, 0, -1):
    print("*"*i+" "*((N*2)-(2*i)) + "*"*i)
