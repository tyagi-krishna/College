n = int(input("enter the number of elements in the list: "))
list = []

for i in range(0, n):
    list.append(int(input("enter the element: ")))
    
print("The list is:",list)

max = list[0]

for i in range(0,n-1):
    if list[i]<list[i+1]:
        max = list[i+1]
        
print("The biggest elemnt is:",max)
