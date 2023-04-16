A = {3, 9, 1, 5}
B = {3, 8, 3, 7, 2, 1, 9}
C = {1, 2, 8, 8, 9, 9}



# Union
#The union of sets A,B and C includes all elements of A,B and C without the common elements.
print("Union:", A|B|C)

D = A.union(B).union(C)
print("Union:", D)

E = {1,2,3,4,5,6,7,8,9}

# Intersection
#The intersection of sets A,B and C includes only the common elements of A,B and C.
print("Intersection:",A&B&C&E)

F = A.intersection(B).intersection(C).intersection(E)
print("Intersection:",F)
 
G = {0}
print("Intersection:",A&G)

# Difference
#The difference betweensets A,B and C include elements of set A that are not present on set B and set C.
print("Difference:",A-B-C)
print("Difference:",A.difference(B).difference(C))

# Symmetric Difference
#The symmetric difference between sets A B  includes all elements of A B  without the common elements.

print("Symmetric Difference:",A^B)
symmetric_diff = A.symmetric_difference(B)

# Convert symmetric difference set to list for easier visualization
symmetric_diff_list = list(symmetric_diff)


print("Symmetric difference: ", symmetric_diff_list)

# Subset
#the issubset() method is used to check if one set is a subset of another set, meaning it contains all elements of the other set.
print("Subset:",A.issubset(C))

# Superset
#the issuperset() method is used to check if one set is a superset of another set, meaning it contains all elements of the other set.
print("Superset:",A.issuperset(C))


# Disjoint
#In Python, you can use the isdisjoint() method to check if two sets are disjoint, meaning they have no common elements.
print("Disjoint:",A.isdisjoint(B))


# Complement
#The complement of a set A is the set of all elements in the universal set E that are not in A.
print("Complement:",E-A)
print("Complement:",E.difference(A))


