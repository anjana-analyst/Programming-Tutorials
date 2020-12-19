f=int(input("Enter the no of bytes avaiable"))
u=int(input("Enter the no of bytes used"))
o=int(input("Enter the deleted file number of bytes"))
n=int(input("Enter the new file no of bytes"))
freeSize=(f+o)-n
if f+o < n:
    print("Size Full")
else:
    print("Free bytes avaiable is ",freeSize)
