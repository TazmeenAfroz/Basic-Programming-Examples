name = input("Enter the name of student: ")
age = input("Enter age: ")
cgpa = input("Enter CGPA: ")

student_info = {"name": name, "age": age, "cgpa": cgpa}

# Printing name without brackets
print(student_info["name"])

# Printing the whole dictionary
print(student_info)


# Printing all items without brackets
for key, value in student_info.items():
    print(key + ":", value)
   
# Creating a list of dictionary keys and accessing a specific key
keys_list = list(student_info.keys())
print(keys_list[0])  # Prints "name"
