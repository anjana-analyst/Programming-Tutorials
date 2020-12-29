def all_combination(arr):
    if len(arr) == 0:
        return []

    if len(arr) == 1:
        return [arr]

    per = []
    for i in range(len(arr)):
        temp = arr[i]
        remaining = arr[:i] + arr[i+1:]
        for a in all_combination(remaining):
            per.append([temp] + a)
    return per


students = ["Ram", "Anuj", "Deepak", "Ravi"]
for combination in all_combination(students):
    print(combination)
