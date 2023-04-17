'''Dictionary.py'''
# This program demonstrates the use of a dictionary.

student = {'name':'Tazmeen','age':18,'course':'BSAI'}
courses = {1:'Diff Eq',2:'OOP',3:'DLD',4:'CPS'}

print(student)
print(student['name'])
print(courses[3])

# Add a new key-value pair
student['address'] = 'Peshawar'
print(student)

# Update a key-value pair
student['age'] = 19
print(student)

# Delete a key-value pair
del student['course']
print(student)

# Membership test
print('name' in student)
print('marks' in student)
