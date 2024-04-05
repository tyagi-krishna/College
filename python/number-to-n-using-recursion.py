n = int(input("enter the number to print upto: "))

def printf(i):
    if i==0:
        return 
    
    else:
        print(i)
        i = i-1
        printf(i)
        
        
printf(n)