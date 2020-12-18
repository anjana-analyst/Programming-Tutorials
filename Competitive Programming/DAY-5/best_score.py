def bubblesort(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j] 
                
arr = [66, 57, 54, 53, 64, 52, 59] 
  
bubblesort(arr) 
  
print ("Best Score is:",arr[0]) 
