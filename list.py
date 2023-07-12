

numberlist = list()

while True:

    num = input("Enter number and enter exit to quit :")
    if num == 'exit':
      break

    numberlist.append(float(num))
    
print("Maximum:",max(numberlist))
print("Minimum:",min(numberlist))
print("Sum :",sum(numberlist))
print("Average:",sum(numberlist)/len(numberlist))
print("Total numbers entered:",len(numberlist))

  