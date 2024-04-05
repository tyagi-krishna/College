x = int(input("enter the number in binar: "))

sum = 0
count = 0
while x > 0:
    sum = sum + (x%10)*(2**count)
    x = int(x/10)
    count = count + 1
    
    
print(f"{sum}")