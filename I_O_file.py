'''TO OPEN THE FILE IN READ MODE")'''
file1 = open("Text.txt","r")
print(file1.read())
file1.close()

'''TO OPEN THE FILE IN WRITE MODE'''
file1 = open("Text.txt","w")
user1 = input("Enter the text")
file1.write(user1)
file1.close()

'''TO OPEN THE FILE IN APPEND MODE '''
file1 = open("Text.txt","a")
user2 = input("Enter the text")
file1.write(user2)
file1.close()

'''TO OPEN THE FILE IN BINARY MODE'''
file1 = open("Text.txt","rb")
print(file1.read())
file1.close()


'''TO OPEN THE FILE IN READ AND WRITE MODE'''
file1 = open("Text.txt","r+")
print(file1.read())
user3 = input("Enter the text")
file1.write(user3)
file1.close()

'''TO OPEN THE FILE IN READ AND APPEND MODE'''
file1 = open("Text.txt","a+")

print(file1.read())
user = input("Enter the text")
file1.write(user)
file1.close()



