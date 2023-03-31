#PYTHON LIST METHODS  

List1 = [1,1,3,5,5,6,5,2,6,7,5]

List1.sort()
print(List1) #Output: [1, 1, 2, 3, 5, 5, 5, 5, 6, 6, 7]

List1.append(15)
print(List1) #Output: [1, 1, 2, 3, 5, 5, 5, 5, 6, 6, 7, 15]

List1.extend([8,9,10])
print(List1) #Output: [1, 1, 2, 3, 5, 5, 5, 5, 6, 6, 7, 15, 8, 9, 10]

List1.remove(3)
print(List1) #Output: [1, 1, 2, 5, 5, 5, 5, 6, 6, 7, 15, 8, 9, 10]

List1.pop(2)
print(List1) #Output: [1, 1, 5, 5, 5, 5, 6, 6, 7, 15, 8, 9, 10]

List1.reverse()
print(List1) #Output: [10, 9, 8, 15, 7, 6, 6, 5, 5, 5, 5, 1, 1]

index = List1.index(6)
print(index) #Output: 8

count = List1.count(5)
print(count) #Output: 4

length = len(List1)
print(length) #Output: 13

min = min(List1)
print(min) #Output: 1

max = max(List1)
print(max) #Output: 15

List1.clear()
print(List1) #Output: []