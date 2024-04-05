n = int(input("Enter the number to find product upto: "))
product = 1

for i in range(1 , n+1):
    product = product * i
    
print(product)