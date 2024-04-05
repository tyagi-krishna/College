list = [1,2,3,4,5,6]

n = int(input("enter the number to find in the list: "))

i = 0
j=0
count=0

while(i<5):
    if list[i] == n:
        j = i
        count += 1
    
    i +=1
        
if count!=0:
    print("number is found and address is",j)
    
else:
    print("number is not presentin the data.")