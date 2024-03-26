import sys,random
sys.stdout = open("BT LQDOOJ/THTB Thanh Khê 2024/.INP", "w")

max = 10**6
print(max)
for i in range(1,max):
    if i == 500000: 
        print(1000,1000,end = " ")
        continue
    print(random.randint(0,790),end = " ")