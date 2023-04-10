
# Description: This program will print out a series of patterns




for i in range(6):
   print("#" *  i)

print("\n")

for i in range(6):
    print("@" *  (6-i))

print("\n")

for i in range(6):
    print(" " * i + "." * (6-i))

print("\n")

for i in range(6):
    print(" " * (6-i) + "*" * i)

print("\n")

for i in range(6):
    print(" " * (6-i) + "O" * (2*i+1))

print("\n")

for i in range(6):
    print(" " * i + "$" * (2*(6-i)-1))

print("\n")

for i in range(6):
    print(" " * i + "*" * (2*i+1))

print("\n")

i = 1
while i < 5:
  print(str(i) * i)
  i +=1

print("\n")

i = 97
while i < 102:
    print(chr(i) * (i - 96))
    i += 1

