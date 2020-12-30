str="Aman Ankit Deepak Arjun Nakul Amit Priyanshu Varsh Nakul Aman"
arr=str.split(" ")
length= len(arr)
print("Names repeated more than a time are")
for i in range(length):
    for j in range(i+1,length):
        if arr[i]==arr[j]:
            print(arr[i])
